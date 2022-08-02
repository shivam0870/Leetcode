class Solution {
public:
    vector<int> diStringMatch(string s) {
     // vector<int> res;
     //    int i = 0, j = s.size();
     //    for (char c: s) res.push_back(c == 'I' ? i++ : j--);
     //    res.push_back(j);
     //    return res;
         vector<int>vect;
        int start=0;
        int end=s.length();
        for(int i=0;i<s.length();i++)
        {
            
            if(s[i]=='I')
            {
                vect.push_back(start);
                start++;
            }
            else
            {
                vect.push_back(end);
                end--;  
            }
        }
        vect.push_back(start);
        return vect;
    }
};