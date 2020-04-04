#include<bits/stdc++.h>
using namespace std;
int evaR(vector<string>&tokens) {
	stack<int> stk;
	for (auto s : tokens) {
		if (s.size() > 1 || isdigit(s[0]))
			//this function returns 
			stk.push(stoi(s));
		else {
			auto x2 = stk.top(); stk.pop();
			auto x1 = stk.top(); stk.pop();
			switch (s[0]) {
			case '+': x1 += x2; break;
			case '-': x1 -= x2; break;
			case '*': x1 *= x2; break;
			case '/': x1 /= x2; break;
			}
			stk.push(x1);
		}
	}
	return stk.top();
}
int main() {
	int n;
	cin >> n;
	vector<string> tokens(n);
	for (int i = 0; i < n; i++) {
		cin >> tokens[i];
	}
	
	cout << evaR(tokens);
}
