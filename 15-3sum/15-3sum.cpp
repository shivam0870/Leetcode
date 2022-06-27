class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {      
        int n = nums.size();
        vector<vector<int>> res;
        
       
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<n;i++) {
            
         
            if(i > 0 && nums[i] == nums[i-1]) {
                continue;
            }
            
          
            int start = i + 1, end = n - 1, sum;
            
            while(start < end) {
                sum = nums[i] + nums[start] + nums[end];
              
                
                if(sum > 0) {
                    end--;
                }else if(sum < 0) {
                    start++;
                }else {
                    res.push_back(vector<int>{nums[i], nums[start], nums[end]});
                    
                   
                    start++;
                    while(nums[start] == nums[start - 1] && start < end) {
                        start++;
                    }
                }
            }
        }
        return res;
    }
};