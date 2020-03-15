//time o(n) space o(1)
#include<bits/stdc++.h>
using namespace std;
vector<int> plusone(vector<int>&digit){
	for(int i=digit.size()-1;i>=0;i--){
	if(digit[i]==9)
	digit[i]=0;
	
	else{
	++digit[i];
	return digit;
	}
	
	}
	digit[0]=1;
	digit.emplace_back(0);
	return digit;
}
int main()
{
	vector<int> digit;
	int n;
	cin>>n;
	while(n--){
	int data;
	cin>>data;
	digit.push_back(data);
	}
	plusone(digit);
	for(int i=0;i<digit.size();++i){
		cout<<digit[i]<<" ";
	}
}