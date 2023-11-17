class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end()); 
        sort(arr.begin(),arr.end());
        for(int i=0;i<target.size();i++){
            for(int j=0;j<arr.size();j++){
                if(target[i]!=arr[i]){
                    return false;
                }
                
            }
        }
        return true;
           }
};
