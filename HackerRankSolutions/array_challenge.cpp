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


	return { 0, 0 };
}

