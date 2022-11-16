#pragma once
#include <string>
#include <sstream>

namespace mdalvz {

	namespace log4cpp {
		
		struct NoCopy {

			NoCopy() = default;

			virtual ~NoCopy() = default;

			NoCopy(const NoCopy&) = delete;

			NoCopy& operator=(const NoCopy&) = delete;

		};

		static void concatImpl(std::ostream& stream) {
			//
		}

		template <class H, class ... T>
		static void concatImpl(std::ostream& stream, H head, T ... tail) {
			stream << head;
			concatImpl(stream, tail ...);
		}

		template <class ... T>
		static std::string concat(T ... tail) {
			std::ostringstream stream;
			concatImpl(stream, tail ...);
			return stream.str();
		}

	}

}