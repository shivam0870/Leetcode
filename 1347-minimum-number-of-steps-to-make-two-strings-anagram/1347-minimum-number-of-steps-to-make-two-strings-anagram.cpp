class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char,int> mpp;
        int sum = 0;
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
        }
        for(int i=0; i<s.size(); i++){
            mpp[t[i]]--;
        }
        for(auto it : mpp){
            if(it.second < 0){
                sum = sum + it.second;
            }
        }
        return abs(sum);
    }
};