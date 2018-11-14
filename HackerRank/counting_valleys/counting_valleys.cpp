#include "stdafx.h"
#include <bits/stdc++.h>

using namespace std;

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

int main()
{
	//ofstream fout(getenv("OUTPUT_PATH"));

	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	string s;
	getline(cin, s);

	int result = countingValleys(n, s);

	cout << result << "\n";

	//fout.close();

	return 0;
}