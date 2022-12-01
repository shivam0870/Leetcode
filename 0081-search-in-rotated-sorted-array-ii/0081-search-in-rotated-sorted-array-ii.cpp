class Solution {
public:
    bool search(vector<int>& nums, int target) {
        bool ans =  false;
       for(int i=0; i<nums.size(); i++){
           if(nums[i] == target)
               ans = true;
       } 
        if(ans)
            return true;
        return false;
    }
};