class Solution {
 public:
  int firstOcc(vector<int>& nums, int target) {
        int s=0;
        int e= nums.size()-1;
        int mid=s + (e-s)/2;
        int y=-1;
        while(s<=e){
            
        if (nums[mid]==target){
            y=mid;
            e=mid-1;
             
        }
        else if(nums[mid]<target){
           s=mid+1;
        } 
        else if ( nums[mid]>target){
            e=mid-1;

        }
        mid=(s+e)/2;
        
        } 
       return y;
  }
  
   int lastOcc(vector<int>& nums, int target) {
        int s=0;
        int e= nums.size()-1;
        int mid=s + (e-s)/2;
        int y=-1;
        while(s<=e){
            
        if (nums[mid]==target){
            y=mid;
            s=mid+1;
             
        }
        else if(nums[mid]<target){
           s=mid+1;
        } 
        else if ( nums[mid]>target){
            e=mid-1;

        }
        mid=(s+e)/2;
        
        } 
        return y; 
   }    

 
    vector<int> searchRange(vector<int>& nums, int target) {
        return {firstOcc(nums,target),lastOcc(nums,target)};
    }
};
