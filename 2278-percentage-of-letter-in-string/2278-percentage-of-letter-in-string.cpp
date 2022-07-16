class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n=s.length();
        int count=0;
        for(char x: s){
            if(x==letter){
                count++;
            }
        }
        return count*100/n;
    }
};