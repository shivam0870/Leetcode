class Solution {
public:
    
    bool isArithmetic(vector<int>& vec){
        int n = vec.size();
        if(n == 2)
            return true;
        int diff = abs(vec[1] - vec[0]);
        for(int i=2; i<n; i++){
            if(vec[i] - vec[i-1] != diff)
                return false;
        }
        return true;
    }
    
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        int m = l.size();
        vector<bool> ans;
        for(int i=0;i <m; i++){
            int x = l[i];
            int y = r[i];
            vector<int> vec;
            for(int j=x; j<=y; j++){
                vec.push_back(nums[j]);
            }
            sort(vec.begin(),vec.end());
            if(isArithmetic(vec))
                ans.push_back(true);
            else
                ans.push_back(false);
        }
        return ans;
    }
};