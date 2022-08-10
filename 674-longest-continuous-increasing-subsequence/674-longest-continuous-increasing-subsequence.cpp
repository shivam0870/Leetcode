class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
       if(nums.size() <= 1)
           return nums.size();
        int ans = 1, cnt = 1;
        for(int i=0; i<nums.size() -1; i++){
            if(nums[i] < nums[i+1]){
                cnt++;
                ans = max(ans,cnt);
            }
            else{
                cnt = 1;
            }
        }
        return ans;
    }
};