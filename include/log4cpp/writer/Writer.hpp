#pragma once
#include <log4cpp/utility/Utility.hpp>
#include <string>

namespace mdalvz {

	namespace log4cpp {

		class Writer : public NoCopy {

		public:

			virtual void write(const std::string& data) = 0;

			virtual void flush() = 0;

			Writer() = default;

			virtual ~Writer() = default;

		};

	}

}