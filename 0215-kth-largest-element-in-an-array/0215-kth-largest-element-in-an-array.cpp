class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        // sort(nums.begin(),nums.end());
        // reverse(nums.begin(),nums.end());
        // return nums[k-1];
        priority_queue<int> pq(nums.begin(),nums.end());
      for(int i=1; i<k; i++)
          pq.pop();
        return pq.top();
    }
};