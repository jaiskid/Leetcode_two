#include<bits/stdc++.h>
using namespace std;
int lengthLongestSubstring(string s) {
	int result = 0;
	unordered_map<char, int> lookup;
	for (int left = 0, right = 0; right < s.length(); ++right) {
		if (lookup.count(s[right])) {
			left = max(left, lookup[s[right]] + 1);
		}
		lookup[s[right]] = right;
		result = max(result, right - left + 1);
	}
	return	result;
}
int main() {
	string s;
	cin >> s;
	cout << lengthLongestSubstring(s);
}