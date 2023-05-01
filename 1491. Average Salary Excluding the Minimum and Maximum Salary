class Solution {
public:
    double average(vector<int>& s) {
        double ans =0;
        int mn = 1e9 , mx=0;
        for(int i =0;i<s.size();i++){
            mn = min(mn , s[i]);
            mx = max(mx,s[i]);
            ans +=s[i];
        }
        ans = ans - mn - mx;
        ans = ans/(s.size()-2);
        return ans;
    }
};
