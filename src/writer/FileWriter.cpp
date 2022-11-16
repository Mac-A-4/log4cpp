#include <log4cpp/writer/FileWriter.hpp>

namespace mdalvz {

	namespace log4cpp {

		void FileWriter::write(const std::string& data) {
			stream << data;
		}

		void FileWriter::flush() {
			stream << std::flush;
		}

		FileWriter::FileWriter(std::shared_ptr<FileProvider> provider) : stream(provider->getFile()) {
			//
		}

		FileWriter::~FileWriter() {
			stream.close();
		}

	}

}