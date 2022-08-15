class Solution {
public:
    int minSteps(string s, string t) {
    int cnt =0 ;
        vector<int> arr(26); //To store the frequency
        for(auto it : s){
            arr[it-'a']++;
        }
        for(auto it : t){
            arr[it-'a']--;
        }
        for(auto it : arr){
            cnt+=abs(it);
        }
        return cnt;
    }
};