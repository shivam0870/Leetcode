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
        for(auto it : words2){
            if(mpp1[it] == 1 and mpp2[it] == 1)
                cnt++;
        }
        return cnt;
    }
};