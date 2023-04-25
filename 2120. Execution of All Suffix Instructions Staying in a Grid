class Solution {
public:
    int countInstructions(int n,vector<int>&startPos,string s,int i){
        int cnt=0;
        int r=startPos[0],c=startPos[1];
        for(int p=i;p<s.length();p++){
            if(s[p]=='R'){
                if(c+1<n){
                    cnt++;
                    c++;
                }
                else break;
            }
            else if(s[p]=='L'){
                if(c-1>=0){
                    cnt++;
                    c--;
                }
                else break;
            }
            else if(s[p]=='U'){
                if(r-1>=0){
                    cnt++;
                    r--;
                }
                else break;
            }
            else{
                if(r+1<n){
                    r++;
                    cnt++;
                }
                else break;
            }
        }
        return cnt;
    }

    vector<int> executeInstructions(int n, vector<int>& startPos, string s) {
        vector<int>res;
        for(int i=0;i<s.length();i++){
            res.push_back(countInstructions(n,startPos,s,i));
        }
        return res;
        
    }
};
