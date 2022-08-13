class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
      int sum = 0;
        int cnt = 1;
       
        if(s.size() == 0)
            return {0,0};
        for(int i=0; i<s.size(); i++){
            sum+=widths[s[i] - 'a'];
            if(sum > 100){
                sum = widths[s[i] - 'a'];
                cnt++;
            }
        }
         vector<int> ans;
        ans.push_back(cnt);
        ans.push_back(sum);
        return ans;
    }
};