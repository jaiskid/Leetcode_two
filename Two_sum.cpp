 /*
 5
 1 2 3 4 5
 5
 return index of target 1 2 
 time  o(n)
 space o(n)
 */
  #include <bits/stdc++.h>
  using namespace std;
  vector<int> twosum(vector<int>&nums,int target){
      unordered_map<int,int> lookup;
      for(int i=0;i<nums.size();++i){
          if(lookup.count(target-nums[i])){
              return {lookup[target-nums[i]],i};
          }
          lookup[nums[i]]=i;
      }
  }
  int main() {
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
     vector<int> result;
     result=twosum(nums,target);

     for(int i=0;i<result.size();++i){
         cout<<result[i]<<" ";
     }
  }
