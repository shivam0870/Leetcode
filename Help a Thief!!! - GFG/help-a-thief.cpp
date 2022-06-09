// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int maxCoins(int A[], int B[], int T, int N) {
       vector<pair<int,int>> temp(N);
       for(int i=0 ; i<N ; i++){
           temp[i] = {B[i],A[i]}; 
       }
       
       sort(temp.rbegin(), temp.rend());
       
       int ans = 0;
       for(int i=0 ; i<N && T > 0; i++){
           int val = temp[i].first;
           int plate = min(T,temp[i].second);  
           ans += val * plate;
           T -= temp[i].second;
       }
       return ans;
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int T,N;
        cin>>T>>N;
        
        int A[N], B[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];
        for(int i=0; i<N; i++)
            cin>>B[i];

        Solution ob;
        cout << ob.maxCoins(A,B,T,N) << endl;
    }
    return 0;
}  // } Driver Code Ends