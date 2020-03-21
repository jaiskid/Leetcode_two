#include<bits/stdc++.h>
using namespace std;
vector<vector<string>> res;
bool isvalid(int row,int col,const vector<int> &queen){
	for(int Queen_col=0,r=row-1,lc=col-1,rc=col+1;r>=0;--r,--lc,++rc){
		Queen_col=queen[r];
	if(Queen_col==col||Queen_col==lc||Queen_col==rc){
	return false;
	}
	}
	return true;
}
void SolveNqueen(int row,vector<int> queen){
	int size=queen.size();
	if(row==size){
	vector<string> Solution(size,string(size,'.'));
	for(int r=0;r<size;r++)
	Solution[r][queen[r]]='Q';
	res.push_back(Solution);
	}
	else {
	for(int col=0;col<size;++col){
	queen[row]=col;
	if(isvalid(row,col,queen))
	SolveNqueen(row+1,queen);
	}
}
}
vector<vector<string>> SolveNqueen(int n){
	vector<int> queen(n,0);
	SolveNqueen(0,queen);
	return res;
}
int main(){
	int n;
	cin>>n;
	SolveNqueen(n);
	for(int i=0;i<res.size();i++){
		for(int j=0;j<res[i].size();j++){
			cout<<res[i][j]<<"  ";
			cout<<endl;
		}
		cout<<endl;
	}
}