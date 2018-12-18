#ifndef SIGNALS_H
#define SIGNALS_H

#include <string>
#include <sstream>

namespace factorio
{
	class Signal: public std::string
	{
	public:
		static const std::string CLASS_TYPE;

		static const Signal SIGNAL_0;
		static const Signal SIGNAL_1;
		static const Signal SIGNAL_2;
		static const Signal SIGNAL_3;
		static const Signal SIGNAL_4;
		static const Signal SIGNAL_5;
		static const Signal SIGNAL_6;
		static const Signal SIGNAL_7;
		static const Signal SIGNAL_8;
		static const Signal SIGNAL_9;
		static const Signal SIGNAL_A;
		static const Signal SIGNAL_B;
		static const Signal SIGNAL_C;
		static const Signal SIGNAL_D;
		static const Signal SIGNAL_E;
		static const Signal SIGNAL_F;
		static const Signal SIGNAL_G;
		static const Signal SIGNAL_H;
		static const Signal SIGNAL_I;
		static const Signal SIGNAL_J;
		static const Signal SIGNAL_K;
		static const Signal SIGNAL_L;
		static const Signal SIGNAL_M;
		static const Signal SIGNAL_N;
		static const Signal SIGNAL_O;
		static const Signal SIGNAL_P;
		static const Signal SIGNAL_Q;
		static const Signal SIGNAL_R;
		static const Signal SIGNAL_S;
		static const Signal SIGNAL_T;
		static const Signal SIGNAL_U;
		static const Signal SIGNAL_V;
		static const Signal SIGNAL_W;
		static const Signal SIGNAL_X;
		static const Signal SIGNAL_Y;
		static const Signal SIGNAL_Z;
		static const Signal SIGNAL_ANYTHING;
		static const Signal SIGNAL_BLACK;
		static const Signal SIGNAL_BLUE;
		static const Signal SIGNAL_CYAN;
		static const Signal SIGNAL_EACH;
		static const Signal SIGNAL_EVERYTHING;
		static const Signal SIGNAL_GREEN;
		static const Signal SIGNAL_GREY;
		static const Signal SIGNAL_PINK;
		static const Signal SIGNAL_RED;
		static const Signal SIGNAL_WHITE;
		static const Signal SIGNAL_YELLOW;

		inline const bool getJsonString(std::stringstream& stream) const
		{
			if (!stream.good()) return false;

			stream << "{\"name\":\"" << *this << "\",\"type\":\"" << type << "\"}";
			return true;
		}

	protected:
		Signal(const char* name, const std::string class_type): std::string(name), type(class_type) {}

		const std::string type;

	private:
		Signal(const char* name): std::string(name), type(CLASS_TYPE) {}
	};

	const std::string Signal::CLASS_TYPE("virtual");

	const Signal Signal::SIGNAL_0("signal-0");
	const Signal Signal::SIGNAL_1("signal-1");
	const Signal Signal::SIGNAL_2("signal-2");
	const Signal Signal::SIGNAL_3("signal-3");
	const Signal Signal::SIGNAL_4("signal-4");
	const Signal Signal::SIGNAL_5("signal-5");
	const Signal Signal::SIGNAL_6("signal-6");
	const Signal Signal::SIGNAL_7("signal-7");
	const Signal Signal::SIGNAL_8("signal-8");
	const Signal Signal::SIGNAL_9("signal-9");
	const Signal Signal::SIGNAL_A("signal-A");
	const Signal Signal::SIGNAL_B("signal-B");
	const Signal Signal::SIGNAL_C("signal-C");
	const Signal Signal::SIGNAL_D("signal-D");
	const Signal Signal::SIGNAL_E("signal-E");
	const Signal Signal::SIGNAL_F("signal-F");
	const Signal Signal::SIGNAL_G("signal-G");
	const Signal Signal::SIGNAL_H("signal-H");
	const Signal Signal::SIGNAL_I("signal-I");
	const Signal Signal::SIGNAL_J("signal-J");
	const Signal Signal::SIGNAL_K("signal-K");
	const Signal Signal::SIGNAL_L("signal-L");
	const Signal Signal::SIGNAL_M("signal-M");
	const Signal Signal::SIGNAL_N("signal-N");
	const Signal Signal::SIGNAL_O("signal-O");
	const Signal Signal::SIGNAL_P("signal-P");
	const Signal Signal::SIGNAL_Q("signal-Q");
	const Signal Signal::SIGNAL_R("signal-R");
	const Signal Signal::SIGNAL_S("signal-S");
	const Signal Signal::SIGNAL_T("signal-T");
	const Signal Signal::SIGNAL_U("signal-U");
	const Signal Signal::SIGNAL_V("signal-V");
	const Signal Signal::SIGNAL_W("signal-W");
	const Signal Signal::SIGNAL_X("signal-X");
	const Signal Signal::SIGNAL_Y("signal-Y");
	const Signal Signal::SIGNAL_Z("signal-Z");
	const Signal Signal::SIGNAL_ANYTHING("signal-anything");
	const Signal Signal::SIGNAL_BLACK("signal-black");
	const Signal Signal::SIGNAL_BLUE("signal-blue");
	const Signal Signal::SIGNAL_CYAN("signal-cyan");
	const Signal Signal::SIGNAL_EACH("signal-each");
	const Signal Signal::SIGNAL_EVERYTHING("signal-everything");
	const Signal Signal::SIGNAL_GREEN("signal-green");
	const Signal Signal::SIGNAL_GREY("signal-grey");
	const Signal Signal::SIGNAL_PINK("signal-pink");
	const Signal Signal::SIGNAL_RED("signal-red");
	const Signal Signal::SIGNAL_WHITE("signal-white");
	const Signal Signal::SIGNAL_YELLOW("signal-yellow");
}

#endif // SIGNALS_H
