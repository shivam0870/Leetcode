class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
//         int N = nums.size();
//         set<int> S;
        
//         for(int i = 0; i < N; i++) {
//             if(nums[i] != key) continue;
            
//             for(int j = 0; j < N; j++) {
//                 if(abs(i - j) <= k && nums[i] == key) {
//                     S.insert(j);
//                 }
//             }
//         }
		
//         return vector<int> (S.begin(), S.end());
        vector<int> ans;
    for(int i=0;i<size(nums);i++){
        for(int j=0;j<size(nums);j++){
            
            if(abs(i-j)<=k and nums[j]==key){
                ans.push_back(i);
                break;
            }
        }
    }
    return ans;
    }
};