class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
 
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
        
        for(auto it : A[0]){
            hash1[it - 'a']++;
        }
        
        for(int i=0; i<A.size(); i++){
            for(auto ch : A[i]){
                hash2[ch-'a']++;
            }
        
        
        for(int i=0; i<26;i++){
            hash1[i] = min(hash1[i] , hash2[i]);
            hash2[i] = 0;
        }
        
        }
        
        vector<string> ans;
        
        for(int i=0; i<26; i++)
            if(hash1[i] > 0){
                int cnt = hash1[i];
                while(cnt--){
                    char x = i + 'a';
                    string str;
                    str = x;
                    ans.push_back(str);
                }
                }
        return ans;
        
    }
};














