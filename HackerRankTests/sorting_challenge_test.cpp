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

		TEST_METHOD(TestHourglassSum)
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
	};
}
