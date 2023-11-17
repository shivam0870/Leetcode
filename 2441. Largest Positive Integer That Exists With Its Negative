class Solution {
public:
    int findMaxK(vector<int>& nums) {
        set<int> st;
        for(auto itr: nums){
            st.insert(itr);
        }
        int ans=-1;
        for(auto itr: st){
            if(itr>0){
                if(st.find(-itr)!=st.end()){
                    ans=max(ans, itr);
                }
            }
        }
        return ans;
    }
};
