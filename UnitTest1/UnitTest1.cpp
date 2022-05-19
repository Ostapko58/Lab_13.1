#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_13.1/Var.cpp"
#include "../Lab_13.1/Dod.cpp"

using namespace nsVar;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			a = 1;
			x = 2;
			n = 2;
			nsDod::dod();
			Assert::AreEqual(a, 2.4);
		}
	};
}
