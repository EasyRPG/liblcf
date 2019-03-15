#include "lcf_options.h"
#include "encoder.h"
#include "reader_util.h"
#include "scope_guard.h"
#include <cstdio>
#include <cstdlib>
#include <exception>

#ifdef LCF_SUPPORT_ICU
#   include <unicode/ucsdet.h>
#   include <unicode/ucnv.h>
#else
#   ifdef _MSC_VER
#       error MSVC builds require ICU
#   endif
#endif

#ifdef _WIN32
#   include <windows.h>
#else
#   ifndef LCF_SUPPORT_ICU
#       include <iconv.h>
#   endif
#   include <locale>
#endif

#if defined(__MORPHOS__) || defined(__amigaos4__)
#define ICONV_CONST const
#endif

static std::string filterUtf8Compatible(std::string enc) {
#ifdef LCF_SUPPORT_ICU
	if (ucnv_compareNames(enc.c_str(), "UTF-8") == 0) {
		return "";
	}
#endif
	return enc;
}

Encoder::Encoder(std::string encoding)
	: _encoding(filterUtf8Compatible(std::move(encoding)))
{
	Init();
}

Encoder::~Encoder() {
	Reset();
}

bool Encoder::IsOk() const {
	return _encoding.empty() || (_conv_storage && _conv_runtime);
}

void Encoder::Encode(std::string& str) {
	if (_encoding.empty() || str.empty()) {
		return;
	}
	Convert(str, _conv_runtime, _conv_storage);
}

void Encoder::Decode(std::string& str) {
	if (_encoding.empty() || str.empty()) {
		return;
	}
	Convert(str, _conv_storage, _conv_runtime);
}

void Encoder::Init() {
	if (_encoding.empty()) {
		return;
	}
#ifdef LCF_SUPPORT_ICU
	auto code_page = atoi(_encoding.c_str());
	const auto& storage_encoding = code_page > 0
		? ReaderUtil::CodepageToEncoding(code_page)
		: _encoding;

	auto status = U_ZERO_ERROR;
	constexpr auto runtime_encoding = "UTF-8";
	auto conv_runtime = ucnv_open(runtime_encoding, &status);

	if (conv_runtime == nullptr) {
		fprintf(stderr, "liblcf:  ucnv_open() error for encoding \"%s\": %s\n", runtime_encoding, u_errorName(status));
		return;
	}
	status = U_ZERO_ERROR;
	auto sg = makeScopeGuard([&]() { ucnv_close(conv_runtime); });

	auto conv_storage = ucnv_open(storage_encoding.c_str(), &status);

	if (conv_storage == nullptr) {
		fprintf(stderr, "liblcf:  ucnv_open() error for dest encoding \"%s\": %s\n", storage_encoding.c_str(), u_errorName(status));
		return;
	}

	sg.Dismiss();

	_conv_runtime = conv_runtime;
	_conv_storage = conv_storage;
#else
	_conv_runtime = const_cast<char*>("UTF-8");
	_conv_storage = const_cast<char*>(_encoding.c_str());
#endif
}

void Encoder::Reset() {
#ifdef LCF_SUPPORT_ICU
	auto* conv = reinterpret_cast<UConverter*>(_conv_runtime);
	if (conv) ucnv_close(conv);
	conv = reinterpret_cast<UConverter*>(_conv_storage);
	if (conv) ucnv_close(conv);
#endif
}


void Encoder::Convert(std::string& str, void* conv_dst_void, void* conv_src_void) {
#ifdef LCF_SUPPORT_ICU
	const auto& src = str;
	auto* conv_dst = reinterpret_cast<UConverter*>(conv_dst_void);
	auto* conv_src = reinterpret_cast<UConverter*>(conv_src_void);

	auto status = U_ZERO_ERROR;
	_buffer.resize(src.size() * 4);

	const auto* src_p = src.c_str();
	auto* dst_p = _buffer.data();

	ucnv_convertEx(conv_dst, conv_src,
			&dst_p, dst_p + _buffer.size(),
			&src_p, src_p + src.size(),
			nullptr, nullptr, nullptr, nullptr,
			true, true,
			&status);

	if (U_FAILURE(status)) {
		fprintf(stderr, "liblcf: ucnv_convertEx() error when encoding \"%s\": %s\n", src.c_str(), u_errorName(status));
		_buffer.clear();
	}

	str.assign(_buffer.data(), dst_p);
	return;
#else
	auto* conv_dst = reinterpret_cast<const char*>(conv_dst_void);
	auto* conv_src = reinterpret_cast<const char*>(conv_src_void);
	iconv_t cd = iconv_open(conv_dst, conv_src);
	if (cd == (iconv_t)-1)
		return;
	char *src = &str.front();
	size_t src_left = str.size();
	size_t dst_size = str.size() * 5 + 10;
	_buffer.resize(dst_size);
	char *dst = _buffer.data();
	size_t dst_left = dst_size;
#    ifdef ICONV_CONST
	char ICONV_CONST *p = src;
#    else
	char *p = src;
#    endif
	char *q = dst;
	size_t status = iconv(cd, &p, &src_left, &q, &dst_left);
	iconv_close(cd);
	if (status == (size_t) -1 || src_left > 0) {
		str.clear();
		return;
	}
	*q++ = '\0';
	str.assign(dst, dst_size - dst_left);
	return;
#endif
}


