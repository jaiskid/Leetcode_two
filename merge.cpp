#include<bits/stdc++.h>
using namespace std;
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=m+n;
        while(m>0 and n>0){
            if(nums1[m-1]>nums2[n-1]){
                nums1[i-1]=nums1[m-1];
                --m;
            }
            else{
                nums1[i-1]=nums2[n-1];
                --n;
            }
            --i;
        }
        while(n>0){
            nums1[i-1]=nums2[n-1];
            n--;
            i--;
        }
    }
int main(){
	int n;
	cin>>n;
	int m;
	cin>>m;
	int temp=n+m;
	int nn=n;
	int mm=m;
	vector<int> nums1;
	vector<int> nums2;
	while(n--){
	int data;
	cin>>data;
	nums1.push_back(data);
	}
	while(m--){
	int data;
	cin>>data;
	nums2.push_back(data);
	}
	merge(nums1,nn,nums2,mm);
	for(int i=0;i<temp;i++){
	cout<<nums1[i]<<" ";
	}
}