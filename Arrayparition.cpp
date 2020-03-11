//time o(nlogn) space o(1)
#include<iostream>
using namespace std;
int pairsum(vector<int>&nums){
	sort(nums,nums+nums.size());
	int result=0;
	for(int i=0;i<nums.size();i+=2){
		result+=nums[i];
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
	cout<<pairsum(nums);
}