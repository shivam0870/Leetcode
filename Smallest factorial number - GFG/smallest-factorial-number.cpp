// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution  {
    public :
     
     int countofzero(int n){
         int count = 0;
         while(n>=5){
             count = count + n/5;
             n/=5;
         }
         return count;
     }
     
    int findNum(int n) {
     
     int low = 0, high = INT_MAX, ans=-1,mid;
     while(low <= high){
         mid = low + (high-low)/2;
         if(countofzero(mid) >= n){
             ans = mid;
             high = mid-1;
         }
         else {
             low = mid + 1;
         }
     }
     return ans;
       
    }
};















// { Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        Solution ob;
        cout <<ob.findNum(n) << endl;
    }
return 0;
}  // } Driver Code Ends