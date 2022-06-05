// { Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++

class Solution{
public:

bool isPossible(long mid, long N, long M, long L, long H[], long A[]){
        long totalSpeed  = 0;
        for(long i = 0; i < N; i++){
            long currentSpeed = H[i] + A[i]*mid;
            if(currentSpeed >= L){
                totalSpeed += currentSpeed;
            }
        }
        if (totalSpeed >= M)
        return true;
        return false;
    
        
    }

    long buzzTime(long N, long M, long L, long H[], long A[])
    {
        long low = 0, high = 1e9;
        while(low <= high){
            long mid = low + (high - low)/2;
            if(isPossible(mid, N, M, L, H, A)){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        return low;
    }
};

// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long N, M, L;
        cin>>N>>M>>L;
        long H[N], A[N];
        for(long i = 0;i < N;i++) 
            cin>>H[i]>>A[i];
        
        Solution ob;
        cout<<ob.buzzTime(N, M, L, H, A)<<"\n";
    }
    return 0;
}  // } Driver Code Ends