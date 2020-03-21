#include<bits/stdc++.h>
using namespace std;
int Romantoint(string s) {
	unordered_map<char, int> numeric_val{{'I', 1}, {'V', 5}, {'X', 10}, {'L', 50}, {'C', 100}, {'D', 500}, {'M', 1000}};
	int decimal = 0;
	for (int i = 0; i < s.length(); ++i) {
		if (i > 0 and numeric_val[s[i]] > numeric_val[s[i - 1]])
		{
			decimal += numeric_val[s[i]] - 2 * numeric_val[s[i - 1]];
		}
		else {
			decimal += numeric_val[s[i]];
		}

	}
	return decimal;
}
int main() {
	string s;
	cin >> s;
	cout << Romantoint(s);
}