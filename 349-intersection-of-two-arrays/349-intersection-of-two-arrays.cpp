class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> s1;
        set<int> s2;
        for(int i=0; i<nums1.size(); i++){
            s1.insert(nums1[i]);
        }
        for(int i=0; i<nums2.size(); i++){
            s2.insert(nums2[i]);
        }
          vector<int> ans;
          for(auto it : s1){
              if(s2.find(it) != s2.end())
                  ans.push_back(it);
          }
        return ans;
    }
};