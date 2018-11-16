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
			std::vector<int> result = rotLeft(std::vector<int>({ 1, 2, 3, 4, 5 }), 9);
			Assert::AreEqual(expectedResult.size(), result.size());
			for (int i = 0; i < result.size(); i++) {
				Assert::AreEqual(expectedResult.at(i), result.at(i));
			}
		}

		TEST_METHOD(MinimumBribesTest)
		{
			Assert::AreEqual(2, minimumBribes(std::vector<int>({ 2, 3, 1 })));
			Assert::AreEqual(3, minimumBribes(std::vector<int>({ 2, 1, 5, 3, 4 })));
			Assert::AreEqual(7, minimumBribes(std::vector<int>({ 1, 2, 5, 3, 7, 8, 6, 4 })));
			Assert::AreEqual(3, minimumBribes(std::vector<int>({ 2, 1, 5, 3, 4 })));
			Assert::AreEqual(-1, minimumBribes(std::vector<int>({ 2, 5, 1, 3, 4 })));
		}

		TEST_METHOD(MinimumSwapsTest)
		{
			Assert::AreEqual(3, minimumSwaps(std::vector<int>({ 1, 3, 5, 2, 4, 6, 7 })));
			Assert::AreEqual(3, minimumSwaps(std::vector<int>({ 2, 3, 4, 1, 5 })));
			Assert::AreEqual(3, minimumSwaps(std::vector<int>({ 4, 3, 1, 2 })));
		}

		TEST_METHOD(ArrayManipulationTest)
		{
			Assert::AreEqual((long)10, arrayManipulation(10, std::vector<std::vector<int>>({ { 1, 5, 3 },{ 4, 8, 7 },{ 6, 9, 1 } })));
			Assert::AreEqual((long)200, arrayManipulation(5, std::vector<std::vector<int>>({ { 1, 2, 100 },{ 2, 5, 100 },{ 3, 4, 100 } })));
		}

	};
}