class Solution {
public:
    vector<int> partitionLabels(string s) {
        int pos=1;
        vector<int> ans;
        for(int i=0;i<s.size();i=pos+1)
        {   pos=s.find_last_of(s[i]);
            for(int j=i;j<=pos;j++)
            {   int x=s.find_last_of(s[j]);
                if(pos<x)pos=x;
            }
            ans.push_back(pos-i+1);
        }
        return ans;
    }
};
