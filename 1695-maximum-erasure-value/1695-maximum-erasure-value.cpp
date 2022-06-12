class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
    
        int sum =0,ans =0;
        unordered_set<int> se;
        
        //Two pointer approach 
        int i=0,j=0;
        while(j < nums.size()){
            while(se.count(nums[j]) > 0){
                se.erase(nums[i]);
                sum = sum - nums[i];
                i++;
            }
            sum = sum + nums[j];
            se.insert(nums[j++]);
            ans = max(ans,sum);  
        }
        
       
        return ans;
    }
};