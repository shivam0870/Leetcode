class Solution {
public:
    vector<TreeNode*> allPossibleFBT(int n){
        if(n%2==0) return {};
        map<int,vector<TreeNode*>> mp;
        mp[1] = {new TreeNode(0)};
        for(int currn=3;currn<=n;currn+=2)
        {
            int sum = currn-1;
            int leftsum = 1, rightsum = sum-1;
            while(leftsum<=sum){
                for(auto leftnode: mp[leftsum])
                {
                    for(auto rightnode: mp[rightsum])
                    {
                        TreeNode *rootnode = new TreeNode(0);
                        rootnode->left = leftnode;
                        rootnode->right = rightnode;
                        mp[currn].push_back(rootnode);
                    }
                }
                leftsum += 2;
                rightsum -= 2;
            }
        }
        return mp[n];
    }
};
