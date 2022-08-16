class Solution {
public:
    int firstUniqChar(string s) {
      // unordered_map<char,int> mpp;
      //   for(int i=0; i<s.size(); i++){
      //       mpp[s[i]]++;
      //   }
      //   for(int i=0; i<s.size(); i++){
      //       if(mpp[s[i]] == 1)
      //           return i;
      //   }
      //   return -1;
//          for(int i=0;i<s.length();i++)
//         {
//             bool flag = true;
//             for(int j=0;j<s.length();j++)
//             {
//                 if(i!=j && s[i] == s[j])
//                 {
//                     flag = false;
//                     break;
//                 }
//             }
            
//             if(flag == true)
//                 return i;
//         }
//         return -1;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        for(int i=0; i<s.size(); i++){
            bool flag = true;
            for(int j=0; j<s.size(); j++){
                if(i!=j and s[i] == s[j]){
                    flag = false;
                break;
            }
            }
            if(flag)
                return i;
        }
        return -1;
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
        
    }
};