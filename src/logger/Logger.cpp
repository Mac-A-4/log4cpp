#include <log4cpp/logger/Logger.hpp>

namespace mdalvz {

	namespace log4cpp {

		Logger::Logger(Level level) {
			this->level = level;
		}

		void Logger::add(std::shared_ptr<Writer> writer) {
			writers.push_back(writer);
		}

		void Logger::flush() {
			for (auto& writer : writers) {
				writer->flush();
			}
		}

	}

}