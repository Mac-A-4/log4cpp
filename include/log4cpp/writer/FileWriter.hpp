#pragma once
#include <log4cpp/writer/Writer.hpp>
#include <log4cpp/filesystem/FileProvider.hpp>
#include <fstream>

namespace mdalvz {

	namespace log4cpp {

		class FileWriter : public Writer {

		private:

			std::ofstream stream;

		public:

			void write(const std::string& data) override;

			void flush() override;

			FileWriter(std::shared_ptr<FileProvider> provider);

			~FileWriter();

		};

	}

}