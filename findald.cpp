#include<bits/stdc++.h>
using namespace std;
vector<int> findAlD(vector<int>&nums) {
	vector<int> res;
	for (const auto & i : nums) {
		if (nums[abs(i) - 1] > 0) {
			nums[abs(i) - 1] *= -1;
		}
	}
	for (int i = 0; i < nums.size(); ++i) {
			if (nums[i] > 0) {
				res.emplace_back(i + 1);
			}
			else {
				nums[i] *= -1;
			}
		}
	return res;
}
int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	vector<int>res = findAlD(nums);
	for(int i=0;i<res.size();i++)
		cout<<res[i]<<" ";
}