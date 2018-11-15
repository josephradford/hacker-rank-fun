#include "stdafx.h"
#include "CppUnitTest.h"
#include <bits/stdc++.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "../warmup/warmup.h"

namespace HackerRankTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			
			std::vector<int> c = { 0, 0, 1, 0, 0, 1, 0 };
			Assert::AreEqual(4, jumpingOnClouds(c));
			std::vector<int> d = { 0, 1, 0, 0, 0, 0 };
			Assert::AreEqual(3, jumpingOnClouds(d));
			std::vector<int> e = { 0, 0, 1, 0, 0, 1, 0, 0 };
			Assert::AreEqual(5, jumpingOnClouds(e));
		}

		TEST_METHOD(RepeatedStringTest) 
		{
			Assert::AreEqual((long)7, repeatedString("aba", 10));
			Assert::AreEqual((long)1000000000000, repeatedString("a", 1000000000000));
		}

	};
}