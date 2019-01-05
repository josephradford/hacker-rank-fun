#include "stdafx.h"
#include "thirty_days_code.h"



int Solution::getHeight(Node* root) {
	if (root == NULL) {
		return -1;
	}
	else {
		return 1 + max(getHeight(root->right), getHeight(root->left));
	}
}