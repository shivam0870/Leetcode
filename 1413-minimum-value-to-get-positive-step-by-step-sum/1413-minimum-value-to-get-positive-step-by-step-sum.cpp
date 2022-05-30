class Solution {
public:
    int minStartValue(vector<int>& nums) {
      int sum = 0;
        int ans = 0;
        for(int it : nums){
            sum+=it;
            if(sum<1)
                ans = min(ans,sum);
        }
        return -ans+1;
    }
};