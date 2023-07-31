class Solution {
public:
    void subset(int idx,vector<vector<int>>& ans,int siz,int sum,vector<int>& nums)
    {
        if(idx>=nums.size())
        {
            if(siz>0)
            ans[siz].push_back(sum);
            return;
        }
        subset(idx+1,ans,siz+1,sum+nums[idx],nums);
        subset(idx+1,ans,siz,sum,nums);
    }
    int minimumDifference(vector<int>& nums) {
        int n = nums.size()/2;
        vector<vector<int>> left(n+1),right(n+1);
        vector<int> v1,v2;
        for(int i=0;i<n;i++)
        v1.push_back(nums[i]);
        for(int i=n;i<2*n;i++)
        v2.push_back(nums[i]);
        
        subset(0,left,0,0,v1);
        subset(0,right,0,0,v2);
        
        for(int i=0;i<right.size();i++)
        {
            sort(right[i].begin(),right[i].end());
        }
        int ans = 1e9;
        int sum = 0;
        for(auto &i:nums)
        sum+=i;
        ans = min(abs(sum-2*left[n][0]),abs(sum-2*right[n][0]));
        for(int i=1;i<=n;i++)
        {
            int rsiz = n-i;
            vector<int> tmp = right[rsiz];
            for(auto &j:left[i])
            {
                int b = (sum-2*j)/2;
                auto it = lower_bound(tmp.begin(),tmp.end(),b);
                if(it!=tmp.end())
                {
                    ans = min(ans,abs(sum-2*(j+(*it))));
                }
                if(it!=tmp.begin())
                {
                    it--;
                    ans = min(ans,abs(sum-2*(j+(*it))));
                }
            }

        }
        return ans;
    }
};
