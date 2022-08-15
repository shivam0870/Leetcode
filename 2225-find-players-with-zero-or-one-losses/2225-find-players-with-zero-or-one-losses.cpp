class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        set<int> w,l;
        unordered_map<int,int> mpp;
        for(auto it : matches){
            w.insert(it[0]);
            l.insert(it[1]);
            mpp[it[1]]++;
        }
        vector<int> vec1,vec2;
        vector<vector<int>>ans;
        for(auto it : w){
            if(mpp.find(it) == mpp.end())
                vec1.push_back(it);
        }
        for(auto it : l){
            if(mpp[it] == 1)
                vec2.push_back(it);
        }
        ans.push_back(vec1);
        ans.push_back(vec2);
        return ans;
    }
};