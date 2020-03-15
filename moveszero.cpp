//time o(n) space o(1)
#include<bits/stdc++.h>
using namespace std;
void movesZeros(vector<int>&nums){
	int pos=0;
	for(auto & num: nums){
	if(num)
	swap(nums[pos++],num);
	}
}
int main(){
	vector<int> nums;
	int n;
	cin>>n;
	while(n--){
	int data;
	cin>>data;
	nums.push_back(data);
	}
	movesZeros(nums);
	for(int i=0;i<nums.size();++i){
		cout<<nums[i]<<" ";
	}
}