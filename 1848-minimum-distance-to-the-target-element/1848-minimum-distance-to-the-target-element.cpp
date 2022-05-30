class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
      int minval = INT_MAX;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == target){
                minval = min(minval,abs(i-start));
            }
        }
        return minval;
    }
};