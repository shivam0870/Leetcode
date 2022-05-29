class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
       // int cnt=0;
       //  int len = words.size();
       //  for(int i=0; i<len; i++){
       //      string str = words[i];
       //      if(str == s.substr(0,str.length()))
       //          cnt++;
       //  }
       //  return cnt;
        
        
        int counter = 0;
        
        for(int i=0;i<words.size();i++)
        {
            if(words[i] == s.substr(0,words[i].size()))  
                counter++;
        }

        return counter;
    }
};