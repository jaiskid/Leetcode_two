//time o(n) space o(1)
#include<bits/stdc++.h>
using namespace std;
int buyandsell(vector<int>&prices){
	int result=0;
	for(int i=1;i<prices.size();i++){
	result+=max(0,prices[i]=prices[i-1]);
	}
	return result;
}
int main(){
	int t;
	cin>>t;
	vector<int> prices;
	while(t--){
	int data;
	cin>>data;
	prices.push_back(data);
	}
	cout<<buyandsell(prices);
}