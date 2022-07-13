class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(n,0);
        int x=0,y=1;
        for(auto it : nums){
            if(it>0){
                ans[x] = it;
                x+=2;
            }
            else {
                ans[y] = it;
                y+=2;
            }
        }
        return ans;
    }
};