#pragma once
#include <log4cpp/writer/Writer.hpp>

namespace mdalvz {

	namespace log4cpp {

		class ConsoleWriter : public Writer {

		public:

			void write(const std::string& data) override;

			void flush() override;

			ConsoleWriter() = default;

			virtual ~ConsoleWriter() = default;

		};

	}

}