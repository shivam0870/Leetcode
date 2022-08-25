class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
   int n = temp.size();
        vector<int> ans;
        stack<int> st;
        for(int i=n-1; i>=0; i--){
            while(!st.empty() and temp[st.top()] <= temp[i]){
                st.pop();
            }
            if(st.empty()){
                ans.push_back(0);
            }
            else {
                ans.push_back(st.top()-i);
            }
            st.push(i);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};