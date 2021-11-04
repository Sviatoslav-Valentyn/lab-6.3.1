#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab 6.3.1\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int A[] = { 0, -4, 2, 10 };
			Sum(A, 4);
			Assert::AreEqual(A[1], -4);
		}
	};
}
