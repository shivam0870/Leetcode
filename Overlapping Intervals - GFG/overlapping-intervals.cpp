//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        if(intervals.size() == 0)
        return ans;
        sort(intervals.begin(),intervals.end());
        vector<int> tempinterval = intervals[0];
        for(auto it : intervals){
            //There is a possibilityo of merge of intervals
            if(it[0] <= tempinterval[1]){
                tempinterval[1] = max(it[1] , tempinterval[1]);
            }
            else{
                //There are'nt any merging intervals 
                ans.push_back(tempinterval);
                tempinterval = it;
            }
        }
        ans.push_back(tempinterval);
        return ans;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends