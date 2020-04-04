#include<bits/stdc++.h>
using namespace std;
bool backspaceCompare(string s, string t) {
	int i = s.length() - 1, j = t.length() - 1;
	int skips = 0, skipt = 0;
	// While there may be chars in build(S) or build (T)
	while (i >= 0 or j >= 0) {
		// Find position of next possible char in build(S)
		while (i >= 0) {
			if (s[i] == '#')
				skips++, i--;
			else if (skips > 0)
				skips--, i--;
			else
				break;
		}
		// Find position of next possible char in build(t)
		while (j >= 0) {
			if (t[j] == '#')
				skipt++, j--;
			else if (skipt > 0)
				skipt--, j--;
			else
				break;

		}
		// If two actual characters are different
		if (i >= 0 and j >= 0 and s[i] != t[j])
			return false;
		// If expecting to compare char vs nothing
		if ((i >= 0) != (j >= 0))
			return false;
		i--, j--;
	}
	return true;
}
int main() {
	string s, t;
	cin >> s >> t;
	cout << backspaceCompare(s, t);
}