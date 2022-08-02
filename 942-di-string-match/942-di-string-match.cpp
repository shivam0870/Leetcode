class Solution {
public:
    vector<int> diStringMatch(string s) {
     vector<int> res;
        int i = 0, j = s.size();
        for (char c: s) res.push_back(c == 'I' ? i++ : j--);
        res.push_back(j);
        return res;
    }
};