#include <log4cpp/writer/ConsoleWriter.hpp>
#include <iostream>

namespace mdalvz {

	namespace log4cpp {

		void ConsoleWriter::write(const std::string& data) {
			std::cout << data;
		}

		void ConsoleWriter::flush() {
			std::cout << std::flush;
		}

	}

}