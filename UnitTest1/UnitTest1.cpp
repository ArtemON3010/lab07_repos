#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота 7.2.(1)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 5;
			int a[n][n] = { {7,9,1,3,-2},{-10,3,9,1,-2},{-4,1,4,12,8},{3,-2,1,0,3},{0,1,2,-11,2} };
			int* arr[5] = { a[0], a[1], a[2], a[3], a[4] };
			t = Sum((int**)arr, n);
			Assert::AreEqual(t, 16);
		}
	};
}
