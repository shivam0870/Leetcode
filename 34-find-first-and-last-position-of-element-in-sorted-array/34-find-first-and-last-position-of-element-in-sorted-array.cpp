class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
 int ans1=-1,ans2=-1;
        int n = nums.size();
        int i=0,j=n-1;
        while(i<=j){
            int mid = (i+j)/2;
            if(nums[mid] == target){
                ans2 = mid;
                i=mid+1;
            }
            else if(nums[mid] < target){
                i = mid+1;
            }
            else {
                j=mid-1;
            }
        }
         i=0,j=n-1;
            while(i<=j){
                int mid = (i+j)/2;
                if(nums[mid] == target){
                    ans1 = mid;
                    j=mid-1;
                }
                else if(nums[mid] < target){
                    i=mid+1;
                }
                else {
                    j=mid-1;
                }
            }
        return {ans1,ans2};
    }
};