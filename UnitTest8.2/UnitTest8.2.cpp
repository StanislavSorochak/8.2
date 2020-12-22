#include "pch.h"
#include "CppUnitTest.h"
#include "../laba8.2/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest82
{
	TEST_CLASS(UnitTest82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			std::string str = "asf       dsa";
			ReplaceSpaces(str);
			Assert::AreEqual(str.c_str(), "asf dsa");
		}
	};
}
