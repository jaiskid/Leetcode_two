#include<bits/stdc++.h>
using namespace std;
vector<int> product(vector<int>&nums){
	if(nums.empty()){
	return {};
	}
	vector<int> left_product(nums.size());
	left_product[0]=1;
	for(int i=1;nums.size();++i){
	left_product[i]=left_product[i-1]*nums[i-1];
	}
	int right_product=1;
	for(int i=static_cast<int>(nums.size())-2;i>=0;i--){
	right_product*=nums[i+1];
	left_product[i]=left_product[i]*right_product;
	}
	return left_product;
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
	vector<int> res;
	res=product(nums);
}