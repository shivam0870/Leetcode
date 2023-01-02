class Solution {
public:
    bool detectCapitalUse(string word) {
       
    if((word[0]>=97 && word[0]<=122)&&(word[1]>=65 && word[1]<=90)) 
        return false;
    
    for(int i=1;i<word.size()-1;i++)
    {
        
        if((word[i]>=65 && word[i]<=90)&&(word[i+1]>=97 && word[i+1]<=122) || 
           (word[i]>=97 && word[i]<=122)&&(word[i+1]>=65 && word[i+1]<=90))
            return false;
    } 
    return true;
    }
};
          



