#include "pch.h"
#pragma once
#include "CppUnitTest.h"
#include "../Integer_Numbers.h"
#include "../Integer_Numbers.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Integer_Numbers A(4), B(5), C;
			C = A + B;
			Assert::AreEqual(C.GetX(),9.);
		}
	};
}
