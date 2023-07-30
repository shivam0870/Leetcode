class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {

    map<int, int> m;
    int n1=items1.size();
    for (auto i = 0; i < n1; i++)
        m[items1[i][0]] = items1[i][1];

    int n2=items2.size();
    for (int j = 0; j < n2; j++)
        m[items2[j][0]] += items2[j][1];

    vector<vector<int>> ans;
    for(auto e:m)
        ans.push_back({e.first,e.second});
    return ans;

    }
};
