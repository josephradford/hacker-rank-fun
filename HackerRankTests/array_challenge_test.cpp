#include "stdafx.h"
#include "CppUnitTest.h"
#include <bits/stdc++.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "../HackerRankSolutions/array_challenge.h"

namespace HackerRankTests
{
	TEST_CLASS(ArrayChallengeUnitTest)
	{
	public:

		TEST_METHOD(TestHourglassSum)
		{
			std::vector<std::vector<int>> arr = { { 1, 1, 1, 0, 0, 0},
													{ 0, 1, 0, 0, 0, 0},
													{1, 1, 1, 0, 0, 0 },
													{0, 0, 2, 4, 4, 0 },
													{0, 0, 0, 2, 0, 0 },
													{0, 0, 1, 2, 4, 0 } };

			Assert::AreEqual(19, hourglassSum(arr));
		}

	};
}