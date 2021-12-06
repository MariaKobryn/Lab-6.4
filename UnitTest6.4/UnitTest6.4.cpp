#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Maria\source\repos\Lab 6.4\Lab 6.4\Lab6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest64
{
	TEST_CLASS(UnitTest64)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 0, 3, 6, 9 };
			int t = Min(a, 4);
			Assert::AreEqual(0, t);
		}
	};
}
