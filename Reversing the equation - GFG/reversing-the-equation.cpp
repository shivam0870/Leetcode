// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
  public:
    string reverseEqn (string s)
        {
            stack<string> stack;
     for(int i = 0; i < s.size(); i++)
        { if(s[i] != '+' && s[i] != '-' && s[i] != '*' && s[i] != '/')
        {
                string ans = "";
                ans += s[i];
                while(i+1 < s.size() && s[i+1] != '+' && s[i+1] != '-' && s[i+1] != '*' && s[i+1] != '/')
                {
                    ans += s[i+1];
                    i++;
                }
                stack.push(ans);
            }
            else{
                string ans = "";
                ans += s[i];
                stack.push(ans);
            }
        }
         string finalans = "";
        
        while(!stack.empty())
        {
            finalans += stack.top();
            stack.pop();
        }
        
        return finalans;
        }
};

// { Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.reverseEqn (s) << endl;
    }
}
// Contributed By: Pranay Bansal
  // } Driver Code Ends