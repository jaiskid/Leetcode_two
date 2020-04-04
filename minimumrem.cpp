#include<bits/stdc++.h>
using namespace std;
string minRemove(string s) {
	stack<int>st;
	for (auto i = 0; i < s.size(); i++) {
		if (s[i] == '(')
			st.push(i);
		if (s[i] == ')') {
			if (!st.empty())
				st.pop();
			else {
				s[i] = '*';
			}
		}
	}
	while (!st.empty()) {
		s[st.top()] = '*';
		st.pop();
	}
	s.erase(remove(s.begin(), s.end(), '*'), s.end());
	return s;
}

int main() {
	string s;
	cin >> s;
	cout << minRemove(s);
}