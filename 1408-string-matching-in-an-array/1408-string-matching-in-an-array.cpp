// class Solution {
// public:
    
//   static bool comp(const string &a, const string &b)
//     {
//         return a.size()<b.size();
//     }
//     vector<string> stringMatching(vector<string>& words) 
//     {
//         vector<string>v;
//         sort(words.begin(),words.end(),comp);
//         for(int i=0;i<words.size();i++)
//         {
//             for(int j=i+1;j<words.size();j++)
//             {
//                 if(words[j].find(words[i])!=-1)
//                     {
//                         v.push_back(words[i]);
//                         break;
//                     }
//             }
//         }
//         return v;
    
//     }
// };









class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for(auto i:words)
        {
            for(auto j: words)
            {
                if(i==j) continue;
                if(j.find(i)!=-1)
                {
                    ans.push_back(i);
                    break;                    
                }
            }
        }
        return ans;
    }
};