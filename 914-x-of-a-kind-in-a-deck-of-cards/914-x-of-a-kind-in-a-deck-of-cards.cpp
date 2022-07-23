class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int,int> mpp;
        for(int i=0; i<deck.size(); i++){
            mpp[deck[i]]++;
        }
        int ans = 0;
        for(auto it : mpp){
            ans = __gcd(ans,it.second);
        }
        return ans>=2;
    }
};