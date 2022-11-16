#include <log4cpp/utility/Time.hpp>
#include <ctime>

namespace mdalvz {

	namespace log4cpp {

		std::string getDate() {
			std::time_t time = std::time({});
			char buffer[std::size("yyyy-mm-dd") + 1] = { 0 };
			std::strftime(std::data(buffer), std::size(buffer), "%F", std::gmtime(&time));
			return std::string(buffer);
		}

		std::string getTime() {
			std::time_t time = std::time({});
			char buffer[std::size("yyyy-mm-ddThh:mm:ssZ") + 1] = { 0 };
			std::strftime(std::data(buffer), std::size(buffer), "%FT%TZ", std::gmtime(&time));
			return std::string(buffer);
		}

	}

}