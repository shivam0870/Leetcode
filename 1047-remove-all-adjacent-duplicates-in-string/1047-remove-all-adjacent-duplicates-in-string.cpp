class Solution {
public:
    string removeDuplicates(string s) {
//         int i=0;
//         while(i<s.length())
//         {
//             if(i+1<s.length() && s[i]==s[i+1]){
//                 s.erase(i,2);
//                  if(i>0)
//                 i--;
//             }else{  
//                 i++;
//             }
                
            
            
//         }
//         return s;
        
        string ans = "";
        for(int i=0; i<s.length(); i++){
            
            if(s.size() == 0){
                ans.push_back(s[i]);
            }
            else if(s[i] != ans.back()){
                ans.push_back(s[i]);
            }
            else{
                ans.pop_back();
            }
            
        }
        return ans;
        
        
    }
};