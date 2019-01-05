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

void Solution::levelOrder(Node * root) {
	//Write your code here
	queue<Node*> queue;
	if (root != NULL) {
		// enqueue current root
		queue.push(root);

		// while there are nodes to process
		while (!queue.empty()) {
			// dequeue next node
			Node* node = queue.front();

			// process tree's root;
			cout << node->data << " ";

			queue.pop();

			// enqueue child elements from next level in order
			if (node->left != NULL) {
				queue.push(node->left);
			}
			if (node->right != NULL) {
				queue.push(node->right);
			}
		}
	}
}
