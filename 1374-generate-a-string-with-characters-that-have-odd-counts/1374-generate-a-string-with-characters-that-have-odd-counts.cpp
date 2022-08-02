class Solution {
public:
    string generateTheString(int n) {
       //  if(n%2 != 0)
       //     return string(n,'a');
       // return string(n-1,'a') + 'b';
        
     string s;

            if(n% 2 == 0)
            {
                for(int i = 0; i<n-1; ++i)
                    s.push_back('a');
                s.push_back('b');
            }
            else
            {
                for(int i = 0; i<n; ++i)
                    s.push_back('a');
            }
           
            return s;
        
    }
};