#include<bits/stdc++.h>
using namespace std;
bool containduplicate(vector<int>&nums) {
	unordered_set<int> nums_set(nums.begin(), nums.end());
	return nums_set.size() != nums.size();
}
int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	cout << containduplicate(nums);
}
