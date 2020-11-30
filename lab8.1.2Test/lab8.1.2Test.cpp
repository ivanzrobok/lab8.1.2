#include "pch.h"
#include "CppUnitTest.h"
#include "../lab8.1.2/lab8.1.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab812Test
{
	TEST_CLASS(lab812Test)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char str2[100] = "kdsfjggggas";
			int i = 0;
			bool t;
			t = find1(str2, 0);
			Assert::AreEqual(t, true);
		}
	};
}
