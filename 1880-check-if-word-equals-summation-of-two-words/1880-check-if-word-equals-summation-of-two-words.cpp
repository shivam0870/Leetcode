class Solution {
public:
    
    int getsum(string s){
        int res = 0;
        for(int i=0; i<s.size(); i++){
            res = res * 10 + (s[i]-'a');
        }
        return res;
    }
    
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        return getsum(firstWord) + getsum(secondWord) == getsum(targetWord);        
    }
};