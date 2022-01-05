#include "pch.h"
#include "CppUnitTest.h"

extern "C"
{
	#include "add.h"
}

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace q3Tests
{
	TEST_CLASS(q3Tests)
	{
	public:
		
		TEST_METHOD(T001_add_sizeof4_1_2_3_5_and_0_4_2_5_get_1_6_5_10)
		{
			const int arraySize = 4;  
			int array1[] = { 1,2,3,5 };
			int array2[] = { 0,4,2,5 };
			int EXPECTED[] = { 1,6,5,10 };
			int actual[arraySize];						//Initial an empty array to store calculated values from array 1 and 2
			
			adding(array1, array2, actual, arraySize);
			
			for (int i = 0; i < arraySize; i++) {
				Assert::AreEqual(EXPECTED[i], actual[i]);   //compare each element in expected array and actual array
			}
		}
	
		TEST_METHOD(T002_add_sizeof7_2_9_3_5_12_4_5_and_22_15_8_11_2_6_5_get_24_24_11_16_14_10_10)
		{
			const int arraySize = 7;
			int array1[] = {2,9,3,5,12,4,5 };
			int array2[] = {22,15,8,11,2,6,5 };
			int EXPECTED[] = { 24,24,11,16,14,10,10};
			int actual[arraySize];

			adding(array1, array2, actual, arraySize);
			
			for (int i = 0; i < arraySize; i++) {
				Assert::AreEqual(EXPECTED[i], actual[i]);  
			}
		}
		TEST_METHOD(T003_add_sizeof2_1_2_and_5_4_get_6_6)
		{
			const int arraySize = 2;
			int array1[] = { 1,2};
			int array2[] = { 5,4 };
			int EXPECTED[] = { 6,6 };
			int actual[arraySize];

			adding(array1, array2, actual, arraySize);

			for (int i = 0; i < arraySize; i++) {
				Assert::AreEqual(EXPECTED[i], actual[i]);   //compare each element in expected array and actual array
			}
		}
		TEST_METHOD(T004_add_sizeof3_1_2_3_and_3_2_1_get_4_4_4)
		{
			const int arraySize = 3;
			int array1[] = { 1,2,3 };
			int array2[] = { 3,2,1 };
			int EXPECTED[] = { 4,4,4 };
			int actual[arraySize];

			adding(array1, array2, actual, arraySize);

			for (int i = 0; i < arraySize; i++) {
				Assert::AreEqual(EXPECTED[i], actual[i]);   //compare each element in expected array and actual array
			}
		}
	};
}
