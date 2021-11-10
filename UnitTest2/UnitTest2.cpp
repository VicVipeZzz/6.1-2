#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1 2/6.1 2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int k = 20;
			int a[k] = { -4, -17, -5, 19, -20, 46, 33, 29, 21, -3, 38, 8, 24, -11, 2, 9, -11, 10, 48, 2 };

			Assert::AreEqual(196, GetSum(a, k));
		}
	};
}