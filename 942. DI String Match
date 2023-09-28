class Solution {
public:
    vector<int> diStringMatch(string s) {
        int i=0,j=s.length();
        vector <int> v;
        for(int it:s){
            if(it=='I'){
                v.push_back(i);
                i++;
            }
            else{
                 v.push_back(j);
                j--;
            } 
        }
        v.push_back(i);
        return v;

    }
};
