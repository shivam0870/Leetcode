class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;
        for(int i=0; i<n; i++){
            if(i != n-i-1)
                sum+=mat[i][i];
            sum+=mat[i][n-i-1];
        }
        return sum;
    }
};