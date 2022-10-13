// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution
{
    public:
        vector <int> search(string pat, string txt)
        {
            vector<int> vec;
        int m = pat.size();
        int n = txt.size();
        for(int i=0; i<n; i++){
            string temp = txt.substr(i,m);
            if(temp == pat){
                vec.push_back(i+1);
            }
        }
        if(vec.empty())
        return {-1};
        return vec;
        }
     
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string S, pat;
        cin >> S >> pat;
        Solution ob;
        vector <int> res = ob.search(pat, S);
        for (int i : res) cout << i << " ";
        cout << endl;
    }
    return 0;
}

// Contributed By: Pranay Bansal
  // } Driver Code Ends