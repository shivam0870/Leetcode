class Solution {
public:
    int maximumXOR(vector<int>& nums) {
        int ans=0,sz=nums.size();
        for(int i=0;i<sz;i++)
        ans|=nums[i];
        return ans;
        
    }
};