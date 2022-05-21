// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    string findAndReplace(string S ,int Q, int index[], string sources[], string targets[]) {
        // code here
         int n = S.size(), j = 0;
    string s = "";
    for(int i=0; i<n; i++){
        if(i == index[j]){
            if(S.substr(index[j], sources[j].size()) == sources[j]){
                s += targets[j];
                i += sources[j].size()-1;
            }
            else
                s += S[i];
            j += 1;
        }
        else
            s += S[i];
    }
    return s;
    }
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin>>S;
        
        int Q;
        cin>>Q;
        int index[Q];
        string sources[Q], targets[Q];
        
        for(int i=0; i<Q; i++)
            cin>>index[i];
        for(int i=0; i<Q; i++)
            cin>>sources[i];
        for(int i=0; i<Q; i++)
            cin>>targets[i];

        Solution ob;
        cout<<ob.findAndReplace(S,Q,index,sources,targets)<<endl;
    }
    return 0;
}  // } Driver Code Ends