#pragma once
#include <log4cpp/filesystem/FileProvider.hpp>
#include <string>

namespace mdalvz {

	namespace log4cpp {

		class BasicFileProvider : public FileProvider {

		private:

			std::string base;

		public:

			std::string getFile() override;

			BasicFileProvider(const std::string& base);

		};

	}

}