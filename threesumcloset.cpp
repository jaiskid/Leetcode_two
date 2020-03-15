//time o(n^2) space o(1)
#include<bits/stdc++.h>
using namespace std;
int threesum(vector<int> nums,int target){
	int ans=INT_MAX;
	int min_diff=INT_MAX;
	//make nums in increasing order time o(nlogn)
	sort(nums.begin(),nums.end());
	for(int i=0;i<static_cast<int> (nums.size())-2;++i){
	if(i==0||nums[i]!=nums[i-1]){//skip duplicated
	int j=i+1;
	int k=nums.size()-1;
	while(j<k){//time o(n) for each i
		const auto sum=nums[i]+nums[j]+nums[k];
		if(sum>target)
		k--;
		else if(sum<target)
		j++;
		else 
		return target;
		if(abs(sum-target)<min_diff){
		min_diff=abs(sum-target);
		ans=sum;
		}
	}
	}
	}
	return ans;
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
	int target;
	cin>>target;

	cout<<threesum(nums,target);
}