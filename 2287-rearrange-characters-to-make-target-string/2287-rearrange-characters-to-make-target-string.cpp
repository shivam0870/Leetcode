class Solution {
public:
    int rearrangeCharacters(string s, string target) {
         unordered_map<char,int> targetFreq ; 
        for(auto a : target) {
             targetFreq[a] ++;
        }
          unordered_map<char , int> sentFreq ; 
        for(auto a : s) {
            sentFreq[a] ++ ; 
        }
        int mn = INT_MAX  ; 
        for(auto it : targetFreq){
              mn = min(mn , sentFreq[it.first]/it.second); 
        }
        return mn;
    }
};