#include "stdafx.h"
#include "array_challenge.h"

#define ARR_SIZE 6

using namespace std;
// Complete the hourglassSum function below.
int hourglassSum(std::vector<std::vector<int>> arr) {
	int max_result = 0;
	bool max_result_set = false;
	for (int row = 1; row < (ARR_SIZE - 1); row++) {
		for (int col = 1; col < (ARR_SIZE - 1); col++) {
			int result = arr[row - 1][col - 1] +
						 arr[row - 1][col    ] +
						 arr[row - 1][col + 1] +
						 arr[row   ][col     ] +
						 arr[row + 1][col - 1] +
						 arr[row + 1][col    ] +
						 arr[row + 1][col + 1];
			if ((result > max_result) || !max_result_set) {
				max_result = result;
				max_result_set = true;
			}
		}
	}
	return max_result;
}

// Complete the rotLeft function below.
std::vector<int> rotLeft(std::vector<int> a, int d) {
	int dRot = d % a.size();
	vector<int> result;
	result.resize(a.size());
	for (int i = 0; i < a.size(); i++) {
		int newIdx = i - dRot;
		if (newIdx < 0) {
			newIdx += a.size();
		}
		result[newIdx] = a[i];
	}
	return result;
}

// Complete the minimumBribes function below.
// NOT WORKING
int minimumBribes(std::vector<int> q) {
	int numBribes = 0;
	for (int i = 0; i < q.size(); i++) {
		int outOfPos = q.at(i) - (i + 1);
		if (outOfPos > 2) {
			return -1;
		}
		else if (outOfPos >= 0) {
			numBribes += outOfPos;
		}
		else {
			if (((i + 1) < q.size()) && (q.at(i) > q.at(i + 1))) {
				// there's another swap
				numBribes++;
			}
		}
	}
	return numBribes;
}

// Complete the minimumSwaps function below.
int minimumSwaps(std::vector<int> arr) {
	int swaps = 0;
	vector<pair<int, int>>valPos(arr.size());
	for (int i = 0; i < arr.size(); i++) {
		valPos[i].first = arr[i];
		valPos[i].second = i;
	}
	sort(valPos.begin(), valPos.end());

	// find the cycle
	vector<bool>indexChecked(valPos.size(), false);
	for (int i = 0; i < valPos.size(); i++) {
		if (indexChecked.at(i)) {
			continue;
		}
		int firstIdx = i;
		int currentIdx = firstIdx;
		int nextIdx = valPos[currentIdx].second;
		while (firstIdx != nextIdx) {
			indexChecked[nextIdx] = true;
			nextIdx = valPos[nextIdx].second;
			swaps++;
		}
	}
	return swaps;
}

// Complete the arrayManipulation function below.
long arrayManipulation(int n, std::vector<std::vector<int>> queries) {
	long maxCombination = 0;
	//std::vector<std::vector<int>>::iterator next_it = queries.begin();
	std::vector<std::vector<int>>::iterator it = queries.begin();
	for (int i = 1; i <= n; ) {
		long currentSetValue = 0;
		int nextClosest = i + 1; // worst case, it is a unique set on its own
		bool nextClosestSet = false;

		// find the sum for this union, and determine how far ahead we can jump to get to the next union
		// don't need to iterate whole thing because sets are given in ascending order
		bool inRange = true;
		while (inRange && (it != queries.end())) {
			int endOfThisRow = -1;
			if ((i >= (*it)[0]) && (i <= (*it)[1])) {
				// this set contains the current index
				currentSetValue += (*it)[2];
				endOfThisRow = (*it)[1] + 1;
				++it;
			}
			else if (i < (*it)[0]) {
				// this set is after the current index
				endOfThisRow = (*it)[0];
				inRange = false;
			}
			// else: comes before the current index and shouldn't be hit

			if ((endOfThisRow > 0) && (!nextClosestSet || (nextClosest > endOfThisRow))) {
				nextClosestSet = true;
				nextClosest = endOfThisRow;
			}
		}
		if (currentSetValue > maxCombination) {
			maxCombination = currentSetValue;
		}
		i = nextClosest;
		// need to cycle back through iterators to start where the next set is included
		for (it; it > queries.begin();) {
			std::vector<std::vector<int>>::iterator prev_it = it - 1;

			if ((*prev_it)[0] <= nextClosest && (*prev_it)[1] >= nextClosest) {
				// previous is OK
				it = prev_it;
			}
			else {
				break;
			}
		}
	}
	return maxCombination;
}


