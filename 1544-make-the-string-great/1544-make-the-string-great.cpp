class Solution {
public:
    string makeGood(string s) {
      stack<char> stack;
       for(int i = 0; i < s.size(); ++i)
       {
           if(!stack.empty() && abs(stack.top()-s[i]) == 32)
               stack.pop();
           else
               stack.push(s[i]);
       }
       string res;
       while(!stack.empty())
       {
           res+=stack.top();
           stack.pop();
       }
       reverse(res.begin(), res.end());
       return res;
   }  
    };
// };