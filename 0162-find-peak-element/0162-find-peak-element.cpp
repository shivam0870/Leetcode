class Solution {
public:
    int findPeakElement(vector<int>& nums) {
             int max=0;
      int index=0;
        int n = nums.size();
        if(n == 1) return 0;
        if(n == 2)return nums[0] > nums[1] ? 0 : 1;
      for(int i=0;i<n;i++)
      {
          if(nums[i]>max)
          {
              max=nums[i];
              index=i;
          }
      }
      return index; 
    }
};