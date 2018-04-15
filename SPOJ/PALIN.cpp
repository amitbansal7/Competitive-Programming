/* @amitbansal7 */
#include<bits/stdc++.h>
using namespace std;

string inc(string left) {

	int idx = left.size() - 1;

	while (left[idx] == '9') {
		left[idx] = '0';
		idx--;
	}

	left[idx] = left[idx] + 1;
	return left;
}

int main() {
	int n;
	cin >> n;

	while (n--) {
		string s;
		cin >> s;

		int len = s.size();
		bool isOdd = len % 2;

		char center = '\0';
		if (isOdd) center = s[len / 2];

		string left = s.substr(0, len / 2);
		string right = left;
		reverse(right.begin(), right.end());

		string pal = left + center + right;
		if (center == '\0')
			pal = left + right;
		bool res = 0;
		if (pal > s) {
			cout << pal << endl;
		}
		else {
			if (center != '\0') {
				if (center < '9') {
					center = center + 1;
					cout << left + center + right << endl;
					res = 1;
				}
				else {
					center = '0';
				}
			}
			if (res) continue;

			string tLeft;
			for (int i = 0; i < left.size(); i++)
				tLeft += '9';

			if (left == tLeft) {
				string res = "1";
				for (int i = 0; i < len - 1; i++)
					res += '0';
				res += "1";
				cout << res << endl;
			} else {
				left = inc(left);
				right = left;
				reverse(right.begin(), right.end());

				if (center == '\0')
					cout << left + right << endl;
				else
					cout << left + center + right << endl;
			}
		}
	}
}
