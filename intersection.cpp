#include<bits/stdc++.h>
using namespace std;
vector<int> intersection(vector<int>&nums1, vector<int> nums2) {
	if (nums1.size() > nums2.size())
		return intersection(nums2, nums1);
	sort(nums1.begin(), nums1.end());
	sort(nums2.begin(), nums2.end());
	vector<int> result;
	auto it = nums2.cbegin();
	for (const auto & i : nums1) {
		it = lower_bound(it, nums2.cend(), i);
		if (it != nums2.end() and * it == i) {
			result.emplace_back(*it);
			it = upper_bound(it, nums2.cend(), i);
		}
	}
	return result;
}
int main() {
	int n, m;
	cin >> n >> m;
	vector<int> nums1(n), nums2(m);
	for (int i = 0; i < n; i++) {
		cin >> nums1[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> nums2[i];
	}

	vector<int> num = intersection(nums1, nums2);
	for (int i = 0; i < num.size(); i++) {
		cout << num[i] << " ";
	}
}