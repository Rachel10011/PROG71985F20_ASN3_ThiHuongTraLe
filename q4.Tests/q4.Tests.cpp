#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

extern "C" {
#include "data.h"
}

namespace q4Tests
{
	TEST_CLASS(q4Tests)
	{
	public:
		
		TEST_METHOD(T001_createStudentNumber_2001010001_2001010001)
		{
			char number[] = "2001010001";
			const char EXPECTED[] = "2001010001";
			
			char actual[] = createStudentNumber(number);
			
			for (int i = 0; i < MAXNUMLEN, i++) {
				
			}
			
		}
	};
}
