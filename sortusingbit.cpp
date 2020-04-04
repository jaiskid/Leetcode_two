#include<bits/stdc++.h>
using namespace std;
vector<int> sortbybits(vector<int>&nums) {
	sort(nums.begin(), nums.end(),
	[] (const auto & a, const auto & b) {
		return make_pair(__builtin_popcount(a), a) <
		       make_pair(__builtin_popcount(b), b);
	});
	return nums; 
}
int main() {
	int n;
	cin >> n;
	vector<int> nums;
	nums.resize(n);
	for (int i = 0; i < n; i++)
		cin >> nums[i];
	vector<int> result = sortbybits(nums);
	for (int i = 0; i < n; i++)
		cout << result[i] << " ";
}