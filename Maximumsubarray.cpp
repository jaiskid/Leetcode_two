//time O(n) space o(1)
#include<bits/stdc++.h>
using namespace std;
int maxSub(vector<int>& nums){
	int result=INT_MIN;
	int curr=INT_MIN;
	for(const auto &x:nums){
	curr=(curr==INT_MIN)?x:max(x+curr,x);
	result=max(result,curr);
	}
	return result;
}
int main(){
	int n;
	cin>>n;
	vector<int> nums;
	while(n--){
	int data;
	cin>>data;
	nums.push_back(data);
	}
	cout<<maxSub(nums);

}
