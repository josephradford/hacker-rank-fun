#include "stdafx.h"
#include "warmup.h"
using namespace std;

// Complete the sockMerchant function below.
int sockMerchant(int n, vector<int> ar) {
	int numberOfPairs = 0;

	for (auto it = ar.begin(); it != ar.end(); ) {
		bool pairFound = false;
		auto jt = it + 1;
		while (jt != ar.end() && !pairFound) {
			if (*it == *jt) {
				pairFound = true;
			}
			else {
				++jt;
			}
		}
		if (pairFound) {
			numberOfPairs++;
			ar.erase(jt);
			it = ar.erase(it);
		}
		else {
			++it;
		}
	}

	return numberOfPairs;
}

// Complete the countingValleys function below.
int countingValleys(int n, string s) {
	int seaLevelReference = 0; // our level relative to sea level
	int valleyCount = 0;
	for (char& c : s) {
		assert(c == 'U' || c == 'D');
		if (c == 'U') {
			seaLevelReference++;
		}
		if (c == 'D') {
			seaLevelReference--;
		}
		if (seaLevelReference == 0) {
			if (c == 'U') {
				// we just finished a valley
				valleyCount++;
			}
		}
	}
	return valleyCount;
}

// Complete the jumpingOnClouds function below.
int jumpingOnClouds(std::vector<int> c) {
	int minNumberOfJumps = 0;
	assert(c.front() == 0 && c.back() == 0);
	for (int i = 0; i < (c.size() - 1); ) {
		int lo_idx = i;
		int hi_idx = i + 2;
		for (int j = hi_idx; j >= lo_idx; j--) {
			if (j < c.size()) {
				if (c[j] == 0) {
					i = j;
					minNumberOfJumps++;
					break;
				}
			}
			else {
				i = c.size();
			}
		}
	}
	return minNumberOfJumps;
}

// Complete the repeatedString function below.
long repeatedString(std::string s, long n) {
	long acount = 0;
	for (char& c : s) {
		if (c == 'a') {
			acount++;
		}
	}
	acount = acount * (n / s.length());
	for (long i = 0; i < n % s.length(); i++) {
		if (s[i] == 'a') {
			acount++;
		}
	}
	return acount;
}
