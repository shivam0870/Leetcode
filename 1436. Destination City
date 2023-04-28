class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
 
    unordered_set<string> s;
    int n=paths.size();
    for (int i = 0; i < n; i++)
        s.insert(paths[i][0]);

    string ans;
    for (int i = 0; i < n; i++)
        if (s.find(paths[i][1]) == s.end())
            ans = paths[i][1];
    return ans;

    }
};
