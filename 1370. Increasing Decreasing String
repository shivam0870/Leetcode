class Solution {
public:
    string sortString(string s) {
        set<char>st;
        unordered_map<char,int>mp;
        for(auto x:s){
            st.insert(x);
            mp[x]++;
        }
        string res="",temp="";
        for(auto x:st) temp+=x;
        while(res.size()<s.size()){
            for(int i=0;i<temp.size();i++){
                if(mp[temp[i]]>0){
                    res+=temp[i];
                    mp[temp[i]]--;
                }
            }
            for(int i=temp.size()-1;i>=0;i--){
                if(mp[temp[i]]>0){
                    res+=temp[i];
                    mp[temp[i]]--;
                }
            }
        }
        return res;
        
    }
};
