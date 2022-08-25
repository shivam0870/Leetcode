class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        //  vector<int> vec(26, 0);
        // for (int i = 0; i < magazine.size(); ++i)
        //      ++vec[magazine[i] - 'a'];
        // for (int j = 0; j < ransomNote.size(); ++j)
        //     if (--vec[ransomNote[j] - 'a'] < 0)
        //         return false;
        // return true;
        
         // unordered_map<char, int> map(26);
        //  for (int i = 0; i < magazine.size(); ++i)
        //     ++map[magazine[i]];
        // for (int j = 0; j < ransomNote.size(); ++j)
        //     if (--map[ransomNote[j]] < 0)
        //         return false;
        // return true;
        
//         int count[26] = {0};
//         for(char ch : magazine)
//             count[ch - 'a']++;
        
//         for(char ch : ransomNote)
//             if(count[ch - 'a']-- <= 0)
//                 return false;
        
//         return true;
        unordered_map<char, int> map(26);
        for (int i = 0; i < magazine.size(); ++i)
            ++map[magazine[i]];
        for (int j = 0; j < ransomNote.size(); ++j)
            if (--map[ransomNote[j]] < 0)
                return false;
        return true;
        
        
        
    }
};