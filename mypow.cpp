#include<bits/stdc++.h>
using namespace std;
double mypow(double x, int n) {
	if (n < 0 and n != -n) {
		return 1.0 / mypow(x, n);
	}
	if (n == 0) {
		return 1;
	}
	double v = mypow(x, n / 2);
	if (n & 1 == 0) {
		return v * v;
	}
	else {
		return v * v * x;
	}
}
int main() {
	double x;
	int n;
	cin >> x >> n;
	cout << mypow(x, n);
}