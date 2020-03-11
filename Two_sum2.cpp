//time O(n) space o(1)
#include <iostream>
using namespace std;
int main() {
   int arr[1005];
   int n;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>arr[i];

   }
   int output=1;
   for(int i=0;i<n;i++){
       output*=arr[i];
   }
   for(int i=0;i<n;i++){
       arr[i]=output/arr[i];
   }
   for(int i=0;i<n;i++){
       cout<<arr[i]<<" ";
      }
}
