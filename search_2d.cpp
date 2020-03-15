#include<iostream>
#include<vector>
using namespace std;
/*
if you would like to search along row just divide the number with number of column it will  give the location along row
and for the column you have to take mod of number by the number of column
*/

bool searchMatrix(vector<vector<int>>&matrix,int target){
	if(matrix.empty()){
	return false;
	}
	const int m=matrix.size();
	const int n=matrix[0].size();
	int left=0;
	int right=m*n-1;
	while(left<=right){
	int mid=left+(right-left)/2;
	if(matrix[mid/n][mid%n]>=target){
	right=mid-1;
	}
	else{
	left=mid+1;
	}
	}
	if(left!=m*n && matrix[left/n][left % n]==target){
	return true;
	}
	return false;
}
int main(){
	int n;
	cin>>n;
	vector<vector<int>> matrix(n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			int data;
			cin>>data;
			matrix[i].push_back(data);
		}
	}
	int target;
	cin>>target;
	cout<<searchMatrix(matrix,target);
}