class Solution {
public:
    int minSteps(string s, string t) {
        // unordered_map<char,int> mpp;
        // int sum = 0;
        // for(int i=0; i<s.size(); i++){
        //     mpp[s[i]]++;
        // }
        // for(int i=0; i<s.size(); i++){
        //     mpp[t[i]]--;
        // }
        // for(auto it : mpp){
        //     if(it.second < 0){
        //         sum = sum + it.second;
        //     }
        // }
        // return abs(sum);
        
        
         int Freq[26]={0};
        int count=0;
        for(int i=0;i<s.size();i++)
        {
            Freq[s[i]-'a']++;
            Freq[t[i]-'a']--;
        }
        
        for(int i=0;i<26;i++)
        {
            if(Freq[i]>0)
                count+=Freq[i];
        }
        
        return count;
        
    }
};