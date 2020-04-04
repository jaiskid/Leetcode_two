#include<bits/stdc++.h>
using namespace std;
int largest(vector<int>&height) {
	stack<int>increasing_height;
	int maxArea = 0;
	for (int i = 0; i <= height.size();) {
		if (increasing_height.empty() || (i < height.size() and height[increasing_height.top()] < height[i])) {
			increasing_height.push(i);
			i++;
		}
		else {
			auto h = height[increasing_height.top()];
			increasing_height.pop();
			auto left = increasing_height.empty() ? -1 : increasing_height.top();
			maxArea = max(maxArea, h * (i - left - 1));
		}

	}
	return maxArea;
	
}
int main() {
	int n;
	cin >> n;
	vector<int>height;
	height.resize(n);
	for (int i = 0; i < n; i++) {
		cin >> height[i];
	}
	cout << largest(height);
}