// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    long long countKdivPairs(int A[], int n, int K)
    {
        //  unordered_map<int, int> mp;
        
        // int count = 0;
        // for(int i = 0; i < n; i++)
        // {
        //      int rem = A[i] % K;
            
        //     int curr = (K - rem) % K ;
        //     auto it = mp.find(curr);
        //     if(it != mp.end())
        //     {
        //         count += mp[curr];
        //     }
        //     mp[rem]++;
        // }
        // return count;
        unordered_map<int,int>m;
        long ans = 0;
        for(int i=0;i<n;i++)
        { 
            int rem1 = A[i]%K;
            if(rem1!=0)
            ans+=m[K-A[i]%K];
            else ans+=m[0];
            m[rem1]++;
        }
        return ans;
    }
    
};

// { Driver Code Starts.

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		for (int i = 0; i < n; i++)
			cin >> a[i];

		int k;
		cin >> k;

        Solution ob;
		cout << ob. countKdivPairs(a, n , k) << "\n";



	}


	return 0;
}
  // } Driver Code Ends