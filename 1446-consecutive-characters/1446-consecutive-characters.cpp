class Solution {
public:
    int maxPower(string s) {
        // int cnt = 1;
        // int max_cnt = 1;
        // for(int i=0; i<s.size(); i++){
        //     if(s[i] == s[i+1]){
        //         cnt++;
        //         max_cnt = max(max_cnt,cnt);
        //     }
        //     else {
        //         cnt = 0;
        //     }
        // }
        // return max_cnt;
        
        int ans = 1, streak = 1;
        for(int i = 1; i < size(s); i++) 
            if(s[i] == s[i-1]) 
                ans = max(ans, ++streak);    
            else 
                streak = 1;                              
        return ans;
    }
};