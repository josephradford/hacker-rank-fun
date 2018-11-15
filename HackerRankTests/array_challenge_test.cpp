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
			std::vector<std::vector<int>> arr = { { 1, 1, 1, 0, 0, 0 },
			{ 0, 1, 0, 0, 0, 0 },
			{ 1, 1, 1, 0, 0, 0 },
			{ 0, 0, 2, 4, 4, 0 },
			{ 0, 0, 0, 2, 0, 0 },
			{ 0, 0, 1, 2, 4, 0 } };

			Assert::AreEqual(19, hourglassSum(arr));
		}

		TEST_METHOD(TestRotLeft)
		{
			std::vector<int> expectedResult = std::vector<int>({ 5, 1, 2, 3, 4 });
			std::vector<int> result = rotLeft(std::vector<int>({ 1, 2, 3, 4, 5 }), 4);
			Assert::AreEqual(expectedResult.size(), result.size());
			for (int i = 0; i < result.size(); i++) {
				Assert::AreEqual(expectedResult.at(i), result.at(i));
			}
		}

	};
}