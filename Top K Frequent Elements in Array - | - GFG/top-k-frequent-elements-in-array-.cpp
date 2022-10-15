//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
  
static bool  cmp(pair<int,int>a,pair<int,int>b)

  {

      if(b.first==a.first)

      {

          return b.second<a.second;

      }

      return b.first<a.first;

  }
  
    vector<int> topK(vector<int>& nums, int k) {
        unordered_map<int,int>m;

        for(int i=0;i<nums.size();i++)

        {

            m[nums[i]]++;

        }

        vector<pair<int,int>>temp;

        for(auto i:m)

        {

            temp.push_back({i.second,i.first});

            

        }

        int i=0;

        vector<int>ans;

        sort(temp.begin(),temp.end(),cmp);

        while(k--)

        {

           ans.push_back(temp[i++].second) ;

        }

      

        return ans;
    }
};





















//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends