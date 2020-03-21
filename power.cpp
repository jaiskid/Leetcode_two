#include<bits/stdc++.h>
using namespace std;
 double myPow(double x, int n) {
        double result = 1;
        long long abs_n = abs(static_cast<long long>(n));
        while (abs_n > 0) {
            if (abs_n & 1) {
                result *= x;
            }
            abs_n >>= 1;
            x *= x;
        }
        return n < 0 ? 1 / result : result;
    }
int main(){
	double x;int n;
	cin>>x>>n;
	cout<<myPow(x,n);
}