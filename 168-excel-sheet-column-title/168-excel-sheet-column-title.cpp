class Solution {
public:
    string convertToTitle(int c) {
         string s="";  
            while(c){
                c--;
            s += (c%26)+'A';
            c = c/26;
        }
        reverse(s.begin(),s.end());
            
        
        return s;
    }
};