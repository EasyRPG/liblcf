#include <cmath>
#include <lsd_reader.h>

////////////////////////////////////////////////////////////
/// Timestamp
////////////////////////////////////////////////////////////
namespace {
double const DIFF_DAYS = std::floor(365.2422 * 70) + 3;
double const SECOND_PER_HOUR = 60 * 60 * 24;
}

double LSD_Reader::ToMicrosoftAccessTime(std::time_t const t) {
	return(t / SECOND_PER_HOUR + DIFF_DAYS);
}
std::time_t LSD_Reader::ToUnixTime(double const ms) {
	return(time_t(ms * SECOND_PER_HOUR - DIFF_DAYS * SECOND_PER_HOUR));
}

double LSD_Reader::GenerateTimeStamp(time_t const t) {
	return ToMicrosoftAccessTime(t);
}
