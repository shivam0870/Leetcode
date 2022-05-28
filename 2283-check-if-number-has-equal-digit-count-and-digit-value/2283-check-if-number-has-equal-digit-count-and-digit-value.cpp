class Solution {
public:
    bool digitCount(string num) {
       unordered_map<int,int> mpp;
        for(int i=0; i<num.size(); i++){
            int x = num[i] - '0';
            mpp[x]++;
        }
        for(int i=0; i<num.size(); i++){
            int number = num[i] - '0';
            if(mpp[i] != number)
                return false;
        }
        return true;
    }
};