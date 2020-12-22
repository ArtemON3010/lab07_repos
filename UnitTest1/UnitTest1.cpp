#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота №7.2.(2)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int N = 5;
			int S = 0;
			int a[N][N] = { {7,9,1,3,-2},{-10,-2,3,9,1},{4,12,8,-4,1},{3,0,3,-2,1},{0,1,2,-11,5} };
			int* arr[5] = { a[0], a[1], a[2], a[3], a[4] };
			t = Sum((int**)arr, N, 0, S);
			Assert::AreEqual(t, 16);
		}
	};
}
