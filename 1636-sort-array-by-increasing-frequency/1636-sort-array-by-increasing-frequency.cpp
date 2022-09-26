// class Solution {
// public:
    
    
//        static bool cmp(vector<int> a, vector<int> b){ 
//             if(a[0] < b[0])
//                 return true;
//             if(a[0] == b[0]){
//                 return a[1]>b[1];
//             }
//             return false;
//         }
    
//     vector<int> frequencySort(vector<int>& nums) {
    
        
//       unordered_map<int,int> mpp;
//         for(auto it : nums){
//             mpp[it]++; //From here we will get the frequency of each letter 
//         }
        
//         vector<vector<int,int>> v;
//         for(auto i : mpp){
//             v.push_back({i.second , i.first}); //Here i.second is the frequency of each letter
//         }
        
//         //Now sort the array by the help of comparators defined above
//         sort(v.begin() , v.end() , cmp);
//         vector<int> ans;
//         for(auto a : vec){
//             int num = a[0];
//             while(num--){
//                 ans.push_back(a[1]);
//             }
//         }
//         return ans;
          
//     }
// };


















class Solution {
public:
    
    static bool cmp(pair<int,int>&a, pair<int,int>&b) {
            return  (a.second==b.second) ? a.first>b.first : a.second<b.second;

    }
    
    
    vector<int> frequencySort(vector<int>& nums) {
        if(nums.size()==1) 
            return nums;
        map<int,int> mp;
        for(int i=0;i<nums.size();i++) 
        {
            mp[nums[i]]++;
        }
        vector<pair<int,int>> vp;
        for(auto m : mp) 
        {
            vp.push_back(m);
        }
        sort(vp.begin(),vp.end(),cmp);
        vector<int> result;
        for(auto v : vp) {
            for(int i=0;i<v.second;i++) {
                result.push_back(v.first);
            }
        }
        return result;
    }
};















