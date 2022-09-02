/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root) {
     vector<double> res;
        queue<TreeNode*> qu;
        qu.push(root);
        while(!qu.empty()){
            long temp = 0;
            int s = qu.size();
            for(int i=0; i<s; i++){
                TreeNode* t = qu.front();
                qu.pop();
                if(t->left){
                    qu.push(t->left);
                }
                if(t->right){
                    qu.push(t->right);
                }
                temp+=t->val;
            }
            res.push_back((double)temp/s);
        }
        return res;
        
        
    }
};