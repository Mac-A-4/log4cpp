#pragma once
#include <log4cpp/logger/Level.hpp>
#include <log4cpp/utility/Utility.hpp>
#include <log4cpp/utility/Time.hpp>
#include <log4cpp/writer/Writer.hpp>
#include <memory>
#include <list>
#include <string>

namespace mdalvz {

	namespace log4cpp {

		class Logger : public NoCopy {

		private:

			Level level;

			std::list<std::shared_ptr<Writer>> writers;

		public:

			Logger(Level level);

			void add(std::shared_ptr<Writer> writer);

			void flush();

			template <class ... T>
			void write(Level level, T ... tail) {
				if (level < this->level) {
					return;
				}
				std::string data = concat(getTime(), ": [", level, "] ", tail ..., "\n");
				for (auto& writer : writers) {
					writer->write(data);
				}
			}

			template <class ... T>
			void v(T ... tail) {
				write(Level::VERBOSE, tail ...);
			}

			template <class ... T>
			void d(T ... tail) {
				write(Level::DEBUG, tail ...);
			}

			template <class ... T>
			void i(T ... tail) {
				write(Level::INFO, tail ...);
			}

			template <class ... T>
			void e(T ... tail) {
				write(Level::ERROR, tail ...);
			}

		};

	}

}
