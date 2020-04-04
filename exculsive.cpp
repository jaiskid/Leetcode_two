//Exculsive time of function
#include<bits/stdc++.h>
using namespace std;
vector<string> split(const string& s, const char delim) {
	vector<string> tokens;
	stringstream ss(s);
	string token;
	while (getline(ss, token, delim)) {
		tokens.emplace_back(token);
	}
	return tokens;
}
vector<int> exclusiveTime(int n, vector<string>& logs) {
	vector<int> result(n);
	stack<int> stk;
	int prev = 0;
	for (const auto& log : logs) {
		vector<string> tokens = split(log, ':');
		if (tokens[1] == "start") {
			if (!stk.empty()) {
				result[stk.top()] += stoi(tokens[2]) - prev;
			}
			stk.emplace(stoi(tokens[0]));
			prev = stoi(tokens[2]);
		} else {
			result[stk.top()] += stoi(tokens[2]) - prev + 1;
			stk.pop();
			prev = stoi(tokens[2]) + 1;
		}
	}
	return result;
}
int main() {
	int n;
	cin >> n;
	vector<string> logs;
	logs.resize(2 * n);
	for (int i = 0; i < 2 * n; i++) {
		cin >> logs[i];
	}
	vector<int> result = exclusiveTime(n, logs);
	for (int i = 0; i < n; i++) {
		cout << result[i] << " ";
	}

}