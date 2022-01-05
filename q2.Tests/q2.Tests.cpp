#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C"
{
#include "Difference.h"
}

namespace q2Tests
{
	TEST_CLASS(q2Tests)
	{
	public:
		
		TEST_METHOD(T001_difference_9and4_5)
		{
			//arrange
			double max = 9.0;
			double min = 4.0;
			const double EXPECTED = 5.0;

			//act
			double actual = difi(max, min);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
		TEST_METHOD(T002_difference_0dot5ANDnegative6_6dot5)
		{
			//arrange
			double max = 0.5;
			double min = -6.0;
			const double EXPECTED = 6.5;

			//act
			double actual = difi(max, min);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
		TEST_METHOD(T003_difference_negative6ANDnegative10_4)
		{
			//arrange
			double max = -6.0;
			double min = -10.0;
			const double EXPECTED = 4;

			//act
			double actual = difi(max, min);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
		TEST_METHOD(T004_maximum_negative1and2and3and5point4and9and0_9)
		{
			//arrange
			int sizeArray = 7;
			double list[]= { -1,5.7,3,7,2,9,0 };
			const double EXPECTED = 9.0;

			//act
			double actual = getMax(list,sizeArray);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
		TEST_METHOD(T005_maximum_9point4and1point8and11point22andnegative40point88and9and0point1and101point65and0point05_101point65)
		{
			//arrange
			int sizeArray = 8;
			double list[] = {9.4,1.8,11.22,-40.88,9,0.1,101.65,0.05 };
			const double EXPECTED = 101.65;

			//act
			double actual = getMax(list, sizeArray);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
		TEST_METHOD(T006_minimum_9point4and1point8and11point22andnegative40point88and9and0point1and101point65and0point05_negative40point88)
		{
			//arrange
			int sizeArray = 8;
			double list[] = { 9.4,1.8,11.22,-40.88,9,0.1,101.65,0.05 };
			const double EXPECTED = -40.88;

			//act
			double actual = getMin(list, sizeArray);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
		TEST_METHOD(T007_minimum_negative1and2and3and5point4and9and0_negative9)
		{
			//arrange
			int sizeArray = 7;
			double list[] = { -1,5.7,3,7,2,-9,0 };
			const double EXPECTED = -9.0;

			//act
			double actual = getMin(list, sizeArray);

			//assert
			Assert::AreEqual(EXPECTED, actual);
		}
		
	};
}
