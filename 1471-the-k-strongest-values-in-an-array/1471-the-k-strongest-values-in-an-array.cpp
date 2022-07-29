class Solution {
public:
    vector<int> getStrongest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        int i=0,j=arr.size()-1;
        int mid = arr[(arr.size()-1)/2];
        while(k != 0){
            if((mid - arr[i]) > (arr[j]-mid)){
                i++;
            }
            else {
                j--;
            }
            k--;
        }
         arr.erase(begin(arr) + i, begin(arr) + j + 1);
        // arr.erase(arr.begin()+i , arr.end()+j+1);
        return arr;
    }
};