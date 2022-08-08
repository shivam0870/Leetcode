class Solution {
public:
    int specialArray(vector<int>& nums) {
           for(int i=1;i<1000;i++){
            int cnt=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]>=i) cnt++;
            }
            if(cnt==i) return i;
        }
        return -1; 
    }
};