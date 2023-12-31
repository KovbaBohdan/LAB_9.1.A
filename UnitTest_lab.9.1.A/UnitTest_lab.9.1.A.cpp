#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_9.1.A/lab_9.1.A.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestlab91A
{
	TEST_CLASS(UnitTestlab91A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int N = 3; 
			Student students[N] = {
				{ "Ivanov", 5, 4, 5, 2, Spec::��, 0 }, 
				{ "Petrov", 4, 5, 3, 3, Spec::��, 0 }, 
				{ "Sidorov", 5, 5, 5, 4, Spec::��, 0 } 
			};

			int result = Physics(students, N); 
			Assert::AreEqual(2, result);
		}
	};
}
