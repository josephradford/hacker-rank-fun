#include "stdafx.h"
#include "CppUnitTest.h"
#include <bits/stdc++.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "../jumping_on_the_clouds/jumping_on_the_clouds.h"

namespace HackerRankTests
{		
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			// TODO: Your test code here
			
			std::vector<int> c = { 0, 0, 1, 0, 0, 1, 0 };
			Assert::AreEqual(jumpingOnClouds(c), 4);
			std::vector<int> d = { 0, 0, 1, 0, 0, 1, 0, 0 };
			Assert::AreEqual(jumpingOnClouds(d), 5);
		}

	};
}