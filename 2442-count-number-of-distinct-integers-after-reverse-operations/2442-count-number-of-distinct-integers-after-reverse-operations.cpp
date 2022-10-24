class Solution {
public:
    
      int reverseDigits(int num)
{
    int rev_num = 0;
    while (num > 0) {
        rev_num = rev_num * 10 + num % 10;
        num = num / 10;
    }
    return rev_num;
}
    
    int countDistinctIntegers(vector<int>& nums) {
         int n = nums.size();
        set<int> st;
        // vector<int> newv(n);
        for(int i=0;i<n;i++){
            int a = reverseDigits(nums[i]);
            nums.push_back(a);
        }
        for(int i=0;i<2*n;i++){
            st.insert(nums[i]);
        }
        return st.size();
    }
};