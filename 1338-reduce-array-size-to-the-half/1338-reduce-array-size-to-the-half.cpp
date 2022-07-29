class Solution {
public:
    int minSetSize(vector<int>& arr) {
        map<int,int> mpp;
        
        //By default map orders by order of key and also in ascending order
        
        for(auto it : arr){
            mpp[it]++;
        }
        multimap<int,int,greater<int>> mp;
        for(auto it : mpp){
            mp.insert({it.second,it.first});
        }
        
        int cnt = 0;
        int n = arr.size();
        int sum = n;
        for(auto it = mp.begin(); it != mp.end(); it++){
            sum-=it->first;
            cnt++;
            if(sum<=n/2){
                return cnt;
            }
        }
        return cnt;
    }
};