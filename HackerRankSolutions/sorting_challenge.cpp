#include "stdafx.h"
#include "sorting_challenge.h"


int Checker::comparator(Player a, Player b)
{
	if (a.score < b.score) {
		return -1;
	}
	if (a.score > b.score) {
		return 1;
	}

	int strCtr = 0;
	while (strCtr < a.name.length() && strCtr < b.name.length()) {
		if (a.name[strCtr] > b.name[strCtr]) {
			return -1;
		}
		else if (a.name[strCtr] < b.name[strCtr]) {
			return 1;
		}
		bool endOfA = strCtr == a.name.length() - 1;
		bool endOfB = strCtr == b.name.length() - 1;
		if (endOfA && endOfB) {
			// at the end of a without result
			return 0;
		}
		else if (endOfA) {
			return 1;
		}
		else if (endOfB) {
			return -1;
		}
		strCtr++;
	}
	return 0;
}

// Complete the activityNotifications function below.
int activityNotifications(std::vector<int> expenditure, int d) {
	int numNotifications = 0;
	for (int i = d; i < expenditure.size(); i++) {
		std::vector<int> priorExpenditure(&expenditure[i - d], &expenditure[i]);
		sort(priorExpenditure.begin(), priorExpenditure.end());
		int double_median = 0;
		int midIdx = priorExpenditure.size() / 2;
		if (priorExpenditure.size() % 2) {
			// it's odd, pick the middle one
			double_median = priorExpenditure.at(midIdx) * 2;
		}
		else {
			// it's even, average the middle 2
			double_median = (priorExpenditure.at(midIdx - 1) + priorExpenditure.at(midIdx));
		}
		if (expenditure.at(i) >= double_median) {
			numNotifications++;
		}
	}
	return numNotifications;
}