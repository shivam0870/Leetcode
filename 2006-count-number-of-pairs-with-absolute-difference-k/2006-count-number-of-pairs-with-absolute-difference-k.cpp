class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
      // int count=0;
      //   for(int i=0;i<nums.size();i++){
      //       for(int j=i;j<nums.size();j++){
      //           if(k==abs(nums[i]-nums[j])){
      //               count++;
      //           }
      //       }
      //   }
      //   return count; 
        
        unordered_map<int, int> freq;
        int res = 0;
          for (auto num : nums) {
               res += freq[num+k] + freq[num-k];
            freq[num]++;
        }
        return res;
    }
};