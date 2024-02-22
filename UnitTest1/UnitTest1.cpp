#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.2/Payment.h"
#include "D:\project C++ 2\lab 1.2\lab 1.2\Payment.cpp"
#include "D:\project C++ 2\lab 1.2\lab 1.2\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Payment payment;
			payment.Init("Девід", "Цай", "Цінфенович", 1000.0, 2010, 1.0, 13.0, 20, 24, 36000, 4000);
			int expectedExperience = 14;
			int actualExperience = payment.CalculateExperience(2024);
			Assert::AreEqual(expectedExperience, actualExperience);
		}
	};
}