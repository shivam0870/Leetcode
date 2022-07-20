class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> mpp1,mpp2;
        for(int i=0; i<words1.size(); i++){
            mpp1[words1[i]]++;
        }
        for(int j=0; j<words2.size(); j++){
            mpp2[words2[j]]++;
        }
        int cnt = 0;
        for(auto it : words1){
            if(mpp1[it] == 1 and mpp2[it] == 1)
                cnt++;
        }
//         bool ans1 = false;
//         for(auto it1 : mpp1){
//             if(it1.second == 1)
//                 ans1 = true;
//         }
//         bool ans2 = false;
//         for(auto it2 : mpp2){
//             if(it2.second == 1)
//                 ans2 = true;
//         }
//         if(ans1 and ans2){
//             cnt++;
//         }
        
        return cnt;
        
        
        
        
        
        
//          unordered_map<string, pair<int,int>> mp;
//         for(int i = 0 ; i < words1.size() ; i++) mp[words1[i]].first++;
//         for(int i = 0 ; i < words2.size() ; i++) mp[words2[i]].second++;
//         int cnt = 0;
//         for(auto str : mp) if(str.second.first == 1 && str.second.second == 1) cnt++;
//         return cnt;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};