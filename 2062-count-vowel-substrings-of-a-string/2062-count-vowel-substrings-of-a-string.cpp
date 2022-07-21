class Solution {
public:
    
    bool isVowel(char ch){
        if(ch == 'a' or ch == 'e' or ch =='i' or ch == 'o' or ch == 'u')
            return true;
        return false;
    }
    
    int countVowelSubstrings(string word) {
      if(word.size() <5)
          return 0;
        int cnt = 0;
        for(int i=0; i<word.size(); i++){
            unordered_set<char> vow;
            for(int j=i; j<word.size(); j++){
                if(isVowel(word[j])){
                    vow.insert(word[j]);
                    if(vow.size() == 5)
                        cnt++;
                }
                else 
                    break;
            }
        }
        return cnt;
    }
};