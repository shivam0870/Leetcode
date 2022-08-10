class Solution {
public:
    int maxPower(string s) {
        int cnt = 0;
        int max_cnt = 0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == s[i+1]){
                cnt++;
                max_cnt = max(max_cnt,cnt);
            }
            else {
                cnt = 0;
            }
        }
        return max_cnt+1;
    }
};