class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
    int sum = 0, currsum = 0;
        multiset<int> se;
        int i=0,j=0;
        while(j<nums.size()){
        while(se.count(nums[j])>0) {
		
                se.erase(nums[i]);
                currsum = currsum - nums[i];
                i++;
            }
        
        currsum+=nums[j];
            se.insert(nums[j++]);
          sum = max(sum, currsum);
        }
        
        return sum;
        
        
        
    }
};