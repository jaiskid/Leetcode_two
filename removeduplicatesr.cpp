#include<bits/stdc++.h>
using namespace std;
int duplicate(vector<int>&nums) {
	int last = -1;
	for (const auto& num : nums) {
		if (last == -1 || nums[last] != num) {
			nums[++last] = num;
		}
	}
	return last + 1;
}
int main() {
	int n;
	cin >> n;
	vector<int> nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	int new_index;
	new_index = duplicate(nums);
	for (int i = 0; i < new_index; i++) {
		cout << nums[i] << " ";
	}

}