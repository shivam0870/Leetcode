class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
       vector<int> ans;
        int sum = 0;
        int len = nums.size();
        for(int i=0; i<len; i++){
            sum+=nums[i];
        }
        int val = 0;
        // sort(nums.begin() , nums.end() , greater<>()); //Decreasing
        sort(nums.rbegin() , nums.rend());
        for(int i=0; i<len; i++){
            val+=nums[i];
            ans.push_back(nums[i]);
            if(val > (sum - val))
                break;
        }
        return ans;
    }
};