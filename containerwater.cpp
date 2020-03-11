/*
parameter of this question is given a height of the array and you have to find maximum area of the container
9 
1 8 6 2 5 4 8 3 7
49
*/
//time O(n) space o(1)
#include<bits/stdc++.h>
using namespace std;
int maxArea(vector<int>&height){
	int i=0;int j=height.size()-1;
	int max_area=0;
	while(i<j){
			max_area=max(max_area,min(height[i],height[j])*(j-i));
		if(height[i]>height[j])
			j--;
		else if(height[i]<height[j]){
		i++;
		}
		else{
		//This case cover the equal properties
		i++;
		j--;
		}
	}
	return max_area;
}
int main(){
	int n;
	cin>>n;
	vector<int>height;
	while(n--){
	int data;
	cin>>data;
	height.push_back(data);
	}
	cout<<maxArea(height);
}