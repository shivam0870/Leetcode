class Solution {
public:
    int findLucky(vector<int>& arr) {
        // unordered_map<int,int> mpp;
        // int n = arr.size();
        // for(int i=0; i<n; i++){
        //     mpp[arr[i]]++;
        // }
        // int ss = -90;
        // for(auto it = mpp.begin(); it != mpp.end(); it++){
        //     if(it->first == it->second)
        //         ss = it->first;
        // }
        // return ss;
        
        int maxi=-1;
        unordered_map<int,int> m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto x:m)
        {
            if(x.second==x.first)
                maxi = max(maxi, x.first);
                
        }
        return maxi;
        
    }
};