class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        
        // Method-1
        
       for(int i=0; i<letters.size(); i++){
           if(letters[i] > target)
               return letters[i];
       } 
        return letters[0];
        
        // Method-2
        
//       int n = letters.size();
//         int low=0,high=n-1;
//         char ans = '@';
        
//         while(low <= high){
//             int mid = low +(high - low)/2;
//             if(letters[mid]>target){
//                 ans = letters[mid];       
//                 high = mid -1;
//             }
//             else low = mid +1;
//         }
//         if(ans == '@')
//             ans = letters[0];    
        
//         return ans;
        
    }
};