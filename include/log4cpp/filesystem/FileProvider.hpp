#pragma once
#include <log4cpp/utility/Utility.hpp>
#include <string>

namespace mdalvz {

	namespace log4cpp {

		class FileProvider : public NoCopy {

		public:

			virtual std::string getFile() = 0;

			FileProvider() = default;

			virtual ~FileProvider() = default;

		};

	}

}