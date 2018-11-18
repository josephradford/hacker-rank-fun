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
