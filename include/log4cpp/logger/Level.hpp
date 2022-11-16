#pragma once
#include <ostream>

namespace mdalvz {

	namespace log4cpp {
		
		enum class Level {

			VERBOSE,

			DEBUG,

			INFO,

			ERROR,

		};

		std::ostream& operator<<(std::ostream& stream, const Level& level);

	}

}