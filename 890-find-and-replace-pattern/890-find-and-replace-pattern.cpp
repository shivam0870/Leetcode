class Solution {
public:
    
    string getPattern(string pat){
        string ans;
        int j= 0;
        unordered_map<int,int> mpp;
        for(int i=0; i<pat.size(); i++){
            if(mpp.find(pat[i]) == mpp.end()){
                mpp[pat[i]] = 'a'+j+9;
                j++;
            }
            ans.push_back(mpp[pat[i]]);
        }
        return ans;
    }
    
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        string patter = getPattern(pattern);
        vector<string> ans;
        for(int i=0; i<words.size(); i++){
            string p = getPattern(words[i]);
            if(p==patter){
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};