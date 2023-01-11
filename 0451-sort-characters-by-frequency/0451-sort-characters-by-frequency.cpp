class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char,int> mpp;
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto it : mpp){
            pq.push({it.second,it.first});
        }
        string ans = "";
        while(!pq.empty()){
            auto vl = pq.top();
            pq.pop();
            while(vl.first--){
                ans.push_back(vl.second);
            }
        }
        return ans;
        
    }
};














