#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> generate(int numRows) {
	vector<vector<int>> result;
	for (int i = 0; i < numRows; ++i) {
		result.push_back({});
		for (int j = 0; j <= i; ++j) {
			if (j == 0 || j == i) {
				result[i].emplace_back(1);
			} else {
				result[i].emplace_back(result[i - 1][j - 1] +
				                       result[i - 1][j]);
			}
		}
	}
	return result;
}
int main() {
	int n;
	cin >> n;
	vector<vector<int>> res = vector<vector<int>>(n, vector<int>(n));
	res = generate(n);
	for (int i = 0; i < res.size(); i++) {
		for (int j = 0; j < res[i].size(); j++) {
			cout << res[i][j] << " ";
		}
		cout << endl;
	}
}