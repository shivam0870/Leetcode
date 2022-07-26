class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
     unordered_map<char,int> mpp,ppp;
        for(int i=0;i <chars.size(); i++){
            mpp[chars[i]]++;
        }
        int cnt = 0;
       for(int i=0; i<words.size(); i++){
           ppp = mpp;
           bool val = true;
           for(int j=0; j<words[i].size();j++){
               ppp[words[i][j]]--; 
               if(ppp[words[i][j]]<0){
                   val = false;
                   break;
               }
           }
        if(val)
            cnt+=words[i].size();
       } 
        return cnt;
    }
};