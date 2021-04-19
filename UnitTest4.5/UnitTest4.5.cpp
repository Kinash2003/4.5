#include "pch.h"
#include "CppUnitTest.h"
#include "../4.5/Time.h"
#include "../4.5/Time.cpp"
#include "../4.5/Triad.h"
#include "../4.5/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest45
{
	TEST_CLASS(UnitTest45)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Time A1(9, 9, 9, 0), B1(9, 9, 9, 0);
			Assert::AreEqual(A1 == B1, true);


		}
	};
}
