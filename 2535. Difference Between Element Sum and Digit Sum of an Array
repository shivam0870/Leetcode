class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int es=0,ds=0;
        for(auto i:nums){
            es+=i;
            while(i){
                ds+=i%10;
                i/=10;
            }
        }
        return abs(es-ds);
    }
};
