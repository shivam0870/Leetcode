class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
       //  int n = nums.size();
       // vector<int> nge(n);
       //  stack<int> st;
       //  for(int i=0; i<2*n-1; i++){
       //      while(!st.empty() and st.top() <= nums[i]){
       //          st.pop();
       //      }
       //      if(i<n){
       //          if(st.empty() == false)
       //              nge[i] =    st.top();
       //          else
       //              nge[i] = -1;
       //      }
       //      st.push(nums[i]);
       //  }
       //  return nge;
        int n = nums.size();
        vector<int> next(n, -1);
        stack<int> s; 
        for (int i = 0; i < n * 2; i++) {
            int num = nums[i % n]; 
            while (!s.empty() and nums[s.top()] < num) {
                next[s.top()] = num;
                s.pop();
            }
            if (i < n) s.push(i);
        }   
        return next;
    }
};