#include "stdafx.h"
#include "repeated_string.h"
using namespace std;

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

int main()
{
	//ofstream fout(getenv("OUTPUT_PATH"));

	string s;
	getline(cin, s);

	long n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	long result = repeatedString(s, n);

	cout << result << "\n";

	//fout.close();

	return 0;
}

