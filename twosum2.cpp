#include<bits/stdc++.h>
using namespace std;
vector<int> twosum(vector<int>&nums, int target) {
	int left = 0, right = nums.size() - 1;
	while (left != right) {
		const auto sum = nums[left] + nums[right];
		if (sum > target) {
			right--;
		}
		else if (sum < target) {
			left++;
		}
		else {
			return {left + 1, right + 1};
		}
	}
	return {0, 0};
}
int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int target;
	cin >> target;
	vector<int> res;
	res = twosum(nums, target);
	for (int i = 0; i < res.size(); i++) {
		cout << res[i] << " ";
	}
}