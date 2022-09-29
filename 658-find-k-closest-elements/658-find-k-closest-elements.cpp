
//         if(arr.size() == 1)
//             return arr;
//        int low = 1;
//         int high = arr.size()-1;
//         while((high-low)>=k){
//             if(abs(arr[low]-x) > abs(arr[high]-x))
//                 low++;
//             else
//                 high--; 
            
//         }
//          vector<int> res;
//     for(int i=low; i<=high; i++){
//         res.push_back(i);
//     }
//     return res;
        
        class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        priority_queue<pair<int,int>> pq;
        
        for(auto ele : arr){
            pq.push(make_pair(abs(x-ele),ele));
            if(pq.size() > k)
                pq.pop();
        }
        
        
        vector<int> ans;
        
        
        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }
        
        sort(ans.begin(),ans.end());
        return ans;
        
    }
   
};
















