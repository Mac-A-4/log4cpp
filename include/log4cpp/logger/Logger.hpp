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
			void write(Level level, const std::string& tag, T ... tail) {
				if (level < this->level) {
					return;
				}
				std::string data = concat(getTime(), ": ", tag, " [", level, "] ", tail ..., "\n");
				for (auto& writer : writers) {
					writer->write(data);
				}
			}

			template <class ... T>
			void v(const std::string& tag, T ... tail) {
				write(Level::VERBOSE, tag, tail ...);
			}

			template <class ... T>
			void d(const std::string& tag, T ... tail) {
				write(Level::DEBUG, tag, tail ...);
			}

			template <class ... T>
			void i(const std::string& tag, T ... tail) {
				write(Level::INFO, tag, tail ...);
			}

			template <class ... T>
			void e(const std::string& tag, T ... tail) {
				write(Level::ERROR, tag, tail ...);
			}

		};

	}

}
