#include<bits/stdc++.h>
using namespace std;
void rotate(vector<vector<int>>&matrix){
	const int n=matrix.size();
	//anti diagonal mirror
	for(int i=0;i<n;i++){
	for(int j=0;j<n-i;j++){
			swap(matrix[i][j],matrix[n-1-j][n-1-i]);
		}
	}
	//horizontal mirror
	for(int i=0;i<n/2;i++){
		for(int j=0;j<n;j++){
			swap(matrix[i][j],matrix[n-1-i][j]);
		}
	}
}
int main(){
	int n;
	cin>>n;
	int data;
	vector<vector<int>> matrix(n);
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
	cin>>data;
	matrix[i].push_back(data);
	}
	}
	rotate(matrix);
	for(int i=0;i<matrix.size();i++){
	for(int j=0;j<matrix[i].size();j++){
		cout<<matrix[i][j]<<" ";
		}
		cout<<endl;
	}
}