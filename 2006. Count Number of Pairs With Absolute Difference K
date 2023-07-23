class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        map<int, int> mp;
        int ans = 0;
        sort(nums.begin(), nums.end());
        for(auto i : nums){
            if(mp.find(i-k) != mp.end())
                ans += mp[i-k];
            mp[i]++;
        }
        return ans;
    }
};
