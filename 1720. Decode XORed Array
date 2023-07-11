class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
        

        
        vector<int> ans;
        int n=encoded.size();
        ans.push_back(first);
        int temp=first;
        for(int i=0;i<n;i++)
        {
            temp=encoded[i]^temp;
            ans.push_back(temp);
        }
        return ans;

    }
};
