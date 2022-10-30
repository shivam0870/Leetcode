class Solution {
public:
    int search(vector<int>& nums, int target) {
      int l=0,r=nums.size()-1;
        while(l<=r){
            int mid = (l+r)/2;
            if(nums[mid] == target)
                return mid;
            //Either the left side will be sorted
            if(nums[l] <= nums[mid]){
                //Figure out that if the element lies in the left half or not
                if(target>=nums[l] and target<=nums[mid]){
                    r  = mid -1;
                }
                else{
                    l = mid + 1;
                }
            }
            //Either the right half is sorted
           else{
               if(target >= nums[mid] and target <= nums[r]){
                   l=mid+1;
               }
               else{
                   r = mid-1;
               }
           }
        }
        return -1;
    }
};