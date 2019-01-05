#include "stdafx.h"
#include "CppUnitTest.h"
#include <bits/stdc++.h>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

#include "../HackerRankSolutions/thirty_days_code.h"

namespace HackerRankTests
{
	TEST_CLASS(ThirtyDaysCodeUnitTest)
	{
	public:

		TEST_METHOD(TestBinaryTreeHeight)
		{
			Solution myTree;
			Node* root = NULL;
			int t;
			int data;

			root = myTree.insert(root, 3);
			root = myTree.insert(root, 5);
			root = myTree.insert(root, 2);
			root = myTree.insert(root, 1);
			root = myTree.insert(root, 4);
			root = myTree.insert(root, 6);
			root = myTree.insert(root, 7);

			int height = myTree.getHeight(root);

			Assert::AreEqual(3, height);
		}


		TEST_METHOD(TestBinaryTreeHeightHarder)
		{
			Solution myTree;
			Node* root = NULL;
			int t;
			int data;

			root = myTree.insert(root, 20);
			root = myTree.insert(root, 50);
			root = myTree.insert(root, 35);
			root = myTree.insert(root, 44);
			root = myTree.insert(root, 9);
			root = myTree.insert(root, 15);
			root = myTree.insert(root, 62);
			root = myTree.insert(root, 11);
			root = myTree.insert(root, 13);

			int height = myTree.getHeight(root);

			Assert::AreEqual(4, height);
		}

		
			
			
			
			
			
			
			
			
	};
}
