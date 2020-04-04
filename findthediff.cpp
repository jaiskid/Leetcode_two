#include<bits/stdc++.h>
using namespace std;
char findThedifference(string s, string t) {
	return accumulate(s.begin(), s.end(), 0, bit_xor<int>())^accumulate(t.begin(), t.end(), 0, bit_xor<int>());
}
int main() {
	string s, t;
	cin >> s >> t;
	cout << findThedifference(s, t);
}