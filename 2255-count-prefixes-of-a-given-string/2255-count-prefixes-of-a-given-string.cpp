class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
       int cnt=0;
        int len = words.size();
        for(int i=0; i<len; i++){
            string str = words[i];
            if(str == s.substr(0,str.length()))
                cnt++;
        }
        return cnt;
    }
};