#include<bits/stdc++.h>
using namespace std;
vector<int> smaller(vector<int>&nums) {
	vector<int> ans(nums.size());

	for (int i = 0; i < nums.size(); i++) {
		for (int j = 0; j < nums.size(); j++) {
			if (ans[i] > ans[j]) {
				ans[i]++;
			}
		}
	}

	return ans;
}

int main() {
	int n;
	cin >> n;
	vector<int> nums;
	nums.resize(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	vector<int> result = smaller(nums);
	for (int i = 0; i < result.size(); i++)
		cout << result[i] << " ";
}