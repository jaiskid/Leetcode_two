#include<bits/stdc++.h>
using namespace std;
class Minstack {
	vector<int>a;
	int min;
public:
	Minstack() {
		min = INT_MAX;
	}
	void push(int x) {
		if (x <= min) {
			a.push_back(min);
			min = x;
		}
		a.push_back(x);
	}
	void pop() {
		int t = a.back();
		a.pop_back();
		if (t == min) {
			min = a.back();
			a.pop_back();
		}
	}
	int top() {
		return a.back();
	}
	int getmin() {
		return min;
	}
};
int main() {
	Minstack mj;
	mj.push(5);
	cout << mj.top();
}