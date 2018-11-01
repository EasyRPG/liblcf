/*
 * This file is part of liblcf. Copyright (c) 2018 liblcf authors.
 * https://github.com/EasyRPG/liblcf - https://easyrpg.org
 *
 * liblcf is Free/Libre Open Source Software, released under the MIT License.
 * For the full copyright and license information, please view the COPYING
 * file that was distributed with this source code.
 */

#ifndef LCF_ENCODER_H
#define LCF_ENCODER_H
#include <vector>
#include <string>

class Encoder {
	public:
		explicit Encoder(std::string encoding);

		Encoder(const Encoder&) = delete;
		Encoder& operator=(const Encoder&) = delete;

		~Encoder();

		std::string Encode(const std::string& src);
		std::string Decode(const std::string& src);

		const std::string& GetEncoding() const;
	private:
		void Init();
		void Reset();
		std::string Convert(void* conv_dst, void* conv_src, const std::string& src);
	private:
		void* _conv_storage = nullptr;
		void* _conv_runtime = nullptr;
		std::vector<char> _buffer;
		std::string _encoding;
};


inline const std::string& Encoder::GetEncoding() const {
	return _encoding;
}

#endif
