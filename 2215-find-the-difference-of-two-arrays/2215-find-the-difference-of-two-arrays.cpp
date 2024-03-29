class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
       
        
        unordered_set<int> s1,s2;
        for(int i=0; i<nums1.size(); i++){
            s1.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            s2.insert(nums2[i]);
        }
        
        vector<vector<int>> ans;
        vector<int> sum;
        for(auto x : s1){
            if(s2.find(x) == s2.end())
                sum.push_back(x);
        }
        ans.push_back(sum);
        sum.clear();
        for(auto x : s2){
            if(s1.find(x) == s1.end())
                sum.push_back(x);
        }
        ans.push_back(sum);
        return ans;
        
    }
};




























































