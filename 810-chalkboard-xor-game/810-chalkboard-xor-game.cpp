class Solution {
public:
    bool xorGame(vector<int>& nums) {
         int xo = 0;
        for (int i: nums) xo ^= i;
        return xo == 0 || nums.size() % 2 == 0; 
    }
};