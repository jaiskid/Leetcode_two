//Time o(n) ..space o(1)
#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>&height){
	if(height.empty()){
	return 0;
	}
	int i=0,j=height.size()-1;
	int left_height=height[0];
	int right_height=height[height.size()-1];
	int trap=0;

	while(i<j){
		if(left_height<right_height){
		i++;
		trap+=max(0,left_height-height[i]);
		left_height=max(left_height,height[i]);
		}
		else{
		j--;
		trap+=max(0,right_height-height[j]);
		right_height=max(right_height,height[j]);
		}
	}
	return trap;
}
int main(){
	int n;
	cin>>n;
	vector<int> height;
	for(int i=0;i<n;i++){
	cin>>height[i];
	}
	cout<<trap(height);
}