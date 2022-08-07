class Solution {
public:
    int minTimeToType(string word) {
       int time = word.size();
        char l = 'a';
        for(auto it : word){
            time = time + min(abs(it-l) , 26-abs(l-it));
            l=it;
        }
        return time;
    }
};