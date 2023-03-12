class Solution {
public:
    int maxScore(vector<int>& nums) {
        long long ans = 0, sum = 0;
        sort(nums.begin(), nums.end());
        for(int i = nums.size()-1; i >= 0; --i){
            sum += nums[i];
            if(sum > 0) ans++;
            else break;
        }
        return ans;
    }
};
