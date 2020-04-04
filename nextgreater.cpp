#include<bits/stdc++.h>
using namespace std;
vector<int> nextgreater(vector<int>&nums) {
	int n = nums.size();
	vector<int>next(n, -1);
	stack<int> s;
	for (int i = 0; i < n * 2; i++) {
		int num = nums[i % n];
		while (!s.empty() and nums[s.top()] < num) {
			next[s.top()] = num;

			s.pop();
		}
		if (i < n)
			s.push(i);
	}
	return next;
}
int main() {
	int n;
	cin >> n;
	vector<int>nums(n);
	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	vector<int> result = nextgreater(nums);
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << " ";
	}
}