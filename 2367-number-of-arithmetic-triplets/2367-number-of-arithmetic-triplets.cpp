class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        //  int ans=0;
        // for(int i=0;i<nums.size();i++){
        //     for(int j=i+1;j<nums.size();j++){
        //         for(int k=j+1;k<nums.size();k++){
        //             if((nums[j]-nums[i])==diff && (nums[k]-nums[j])==diff){
        //                 ans++;
        //             }
        //         }
        //     }
        // }
        // return ans;
        
        
        
        
        
        
        
        int cnt = 0;
        unordered_map<int,bool> mpp;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]] = true;
        }
        
        for(int i=0; i<nums.size(); i++){
            if(mpp[nums[i]-diff] and mpp[nums[i] + diff])
                cnt++;
        }
        
        return cnt;
        
        
        
        
        
        
        
        
        
        
        
        
    }
};