#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
extern "C" 
{
#include "larger.h"
}


namespace q1Tests
{
	TEST_CLASS(q1Tests)
	{
	public:
		
		TEST_METHOD(T001_larger_3and7_7)
		{
			//arrange
			double a = 3.0;
			double b = 7.0;
			const double EXPECTED = 7.0;

			//act
			double actual = largerOf(a, b);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
		TEST_METHOD(T002_larger_negative3ANDnegative7_negative3)
		{
			//arrange
			double a = -3.0;
			double b = -7.0;
			const double EXPECTED = -3.0;

			//act
			double actual = largerOf(a, b);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
		TEST_METHOD(T003_larger_0dot5ANDnegative99dot1_0dot5)
		{
			//arrange
			double a = 0.5;
			double b = -99.1;
			const double EXPECTED = 0.5;

			//act
			double actual = largerOf(a, b);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
		TEST_METHOD(T004_larger_5negative99_5)
		{
			//arrange
			double a = 5.0;
			double b = -9.0;
			const double EXPECTED = 5.0;

			//act
			double actual = largerOf(a, b);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
		TEST_METHOD(T005_larger_16dot6AND22_22)
		{
			//arrange
			double a = 16.6;
			double b = 22.0;
			const double EXPECTED = 22.0;

			//act
			double actual = largerOf(a, b);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
	};
}
