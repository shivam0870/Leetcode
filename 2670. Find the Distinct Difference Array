class Solution {
public:
    vector<int> distinctDifferenceArray(vector<int>& nums) {
        map<int,int> pref,suff;
        int n= nums.size();
        vector<int> ans;
        for (int i=0; i<n; i++)suff[nums[i]]++;
        for (int i=0; i<n; i++){
            suff[nums[i]]--;
            pref[nums[i]]++;
            if (suff[nums[i]]==0)suff.erase(nums[i]);
            ans.push_back(pref.size()-suff.size());
        }
        return ans;
    }
};
