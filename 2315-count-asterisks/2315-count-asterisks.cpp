class Solution {
public:
    int countAsterisks(string s) {
         int n=s.length();
    if(n==0) return 0;
    int cnt=0;
    int as=0;
    for(int i=0;i<n;i++){
        if(s[i]=='|'){
             as++;
        }
        if(as%2==0 && s[i]=='*'){
            cnt++;
                                        
        }
    }
    return cnt; 
    }
};