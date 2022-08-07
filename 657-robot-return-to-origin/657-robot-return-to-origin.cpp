class Solution {
public:
    bool judgeCircle(string moves) {
       unordered_map<char,int> mpp;
        for(int i=0; i<moves.size(); i++){
            mpp[moves[i]]++;
        }
        if(mpp['U'] == mpp['D'] and mpp['L'] == mpp['R'])
            return true;
        return false;
    }
};