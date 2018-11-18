#include "stdafx.h"
#include "CppUnitTest.h"
#include <bits/stdc++.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "../HackerRankSolutions/sorting_challenge.h"

namespace HackerRankTests
{
	TEST_CLASS(SortingChallengeUnitTest)
	{
	public:

		TEST_METHOD(TestPlayerSorting)
		{
			Player amy = { 100, "amy" };
			Player amy2 = { 100, "amyy" };
			Player david = { 100, "david" };
			Player heraldo = { 50, "heraldo" };
			Player aakansha = { 75, "aakansha" };
			Player aleksa = { 150, "aleksa" };

			Assert::AreEqual(1, Checker::comparator(amy, david));
			Assert::AreEqual(1, Checker::comparator(aleksa, aakansha));
			Assert::AreEqual(-1, Checker::comparator(aakansha, aleksa));
			Assert::AreEqual(0, Checker::comparator(aakansha, aakansha));
			Assert::AreEqual(1, Checker::comparator(amy, amy2));
			Assert::AreEqual(-1, Checker::comparator(amy2, amy));
		}

		TEST_METHOD(TestNotificationMedian)
		{
			Assert::AreEqual(1, activityNotifications(std::vector<int>({ 10, 20, 30, 40, 50 }), 3));
			Assert::AreEqual(2, activityNotifications(std::vector<int>({ 2, 3, 4, 2, 3, 6, 8, 4, 5 }), 5));
			Assert::AreEqual(0, activityNotifications(std::vector<int>({ 1, 2, 3, 4, 4}), 4));
		}
	};
}
