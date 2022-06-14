// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

// class Solution
// {
//     public:
    
//     int solve(int n){
//         if(n <= 1)
//             return n;
//         return n + solve(n/5);
//     }
    
//         int findNum(int n)
//         {
//         int l = 1, r = n;
//         while(l < r){
//             int mid = (l+r)/2, x = solve(mid);
//             if(x >= n)
//                 r = mid;
//             else
//                 l = mid+1;
//         }
//         return 5*l;
//         }
// };







// bool check(int mid,int n){
//               int cnt5=0,x = mid;
//               while(x){
//                   x /= 5;
//                   cnt5+=x;
//               }
//               return (cnt5 >= n);
//         }
//         int findNum(int n)
//         {
//           //complete the function here
//           int lo = 1,hi = 1e9,mid,ans;
//           while(hi >= lo){
//                 mid = lo + (hi - lo)/2;
//                 if(check(mid,n)){
//                   ans = mid;
//                   hi = mid - 1;
//                 }
//                 else lo = mid + 1;
//           }
//           return ans;
//       }




class Solution  {
    public : 
    
    int countof5(int n){
        int cnt = 0;
        while(n>=5){
            cnt+=(n/5);
            n=n/5;
        }
        return cnt;
    }
    
    int findNum(int n) {
        
        int low = 0, high = INT_MAX , ans;
        while(low<=high){
            int mid = low + (high-low)/2;
            int p = countof5(mid);
            if(p>=n){
                ans = mid;
                high=mid-1;
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