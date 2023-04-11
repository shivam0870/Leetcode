class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        long ans=0;
        for(int i =0;i<sentences.size();i++){
            ans=max(ans,count(sentences[i].begin(),sentences[i].end(),' '));
        }
        return ans+1;
        
    }
};
