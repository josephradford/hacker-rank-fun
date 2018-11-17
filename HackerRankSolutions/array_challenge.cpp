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
	vector<long> results(n + 1, 0);

	for (std::vector<std::vector<int>>::iterator it = queries.begin(); it != queries.end(); ++it) {
		int lo = (*it)[0];
		int hi = (*it)[1];
		int val = (*it)[2];
		results[lo - 1] += val;
		results[hi    ] -= val;
	}

	long maxCombination = 0;
	long sum = 0;
	for (int i = 0; i < n; i++) {
		sum += results[i];
		maxCombination = max(maxCombination, sum);
	}
	return maxCombination;
}


