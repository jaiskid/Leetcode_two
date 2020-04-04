#include<bits/stdc++.h>
using namespace std;
int maxproduct(vector<int>&nums) {
	if (nums.empty())
		return 0;
	int best = INT_MIN;
	int maxProd = 1;
	int minProd = 1;
	for (int n : nums) {
		if (n < 0) {
			swap(minProd, maxProd);
		}
		maxProd = max(maxProd * n, n);
		minProd = min(minProd * n, n);
		best = max(best, maxProd);
	}
	return best;
}
int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	cout << maxproduct(nums);
}