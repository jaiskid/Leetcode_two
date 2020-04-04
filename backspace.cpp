#include<bits/stdc++.h>
using namespace std;
bool compare(string s, string t) {
	string a = "", b = "";
	for (auto c : s) c == '#' ? a.size() > 0 ? a.pop_back() : void() : a.push_back(c);
	for (auto c : t) c == '#' ? b.size() > 0 ? b.pop_back() : void() : b.push_back(c);
	return a == b;
}
int main() {
	string s, t;
	cin >> s >> t;
	cout << compare(s, t) << endl;
}
