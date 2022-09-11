class Solution {
public:
    string customSortString(string order, string s) {
        string ans="";
        unordered_map<char,int>st;
        for(auto ch:s){
            st[ch]++;
        }
        
        for(auto ch:order){
            
            int k=st[ch];
           while(k--){
               ans+=ch;
           }
            st.erase(ch);
        }
        
        for(auto ch:s){
         if(st.find(ch)!=st.end())ans+=ch;
        }

        
        return ans;
    }
};