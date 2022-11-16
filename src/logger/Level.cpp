#include <log4cpp/logger/Level.hpp>

namespace mdalvz {

	namespace log4cpp {

		std::ostream& operator<<(std::ostream& stream, const Level& level) {
			switch (level) {
			case Level::VERBOSE:
				stream << 'V';
				break;
			case Level::DEBUG:
				stream << 'D';
				break;
			case Level::INFO:
				stream << 'I';
				break;
			case Level::ERROR:
				stream << 'E';
				break;
			}
			return stream;
		}

	}

}