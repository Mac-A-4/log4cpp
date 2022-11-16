#include <log4cpp/filesystem/BasicFileProvider.hpp>
#include <log4cpp/utility/Time.hpp>
#include <log4cpp/utility/Utility.hpp>

namespace mdalvz {

	namespace log4cpp {

		std::string BasicFileProvider::getFile() {
			return concat(
				base,
				getDate(),
				"-",
				time(0),
				".txt"
			);
		}

		BasicFileProvider::BasicFileProvider(const std::string& base) {
			this->base = base;
		}

	}

}