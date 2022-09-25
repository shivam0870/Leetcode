class Solution {
public:
    bool canConstruct(string s, int k) {
        if(s.size() < k){
            return false;
        }
        map<int,int> mpp;
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
        }
        int sum = 0;
        for(auto  it : mpp){
            if(it.second%2 != 0)
                sum++;
        }
        return sum<=k;
    }
};