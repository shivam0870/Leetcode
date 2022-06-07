class Solution {
public:
    
    int countGoodSubstrings(string s) {
         int len = s.length();
      int cnt = 0;
        if(len < 3)
            
           
            return 0;
        for(int i=0; i<=len-3; i++){
            if(s[i] != s[i+1] && s[i] != s[i+2] && s[i+1] != s[i+2])
                cnt++;
        }
        return cnt;
    }
};