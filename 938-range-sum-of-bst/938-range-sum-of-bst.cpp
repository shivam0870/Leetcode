class Solution {
public:
    int sum=0;
    void findAns(TreeNode* root, int L, int R){
       
        if(root==NULL)
            return;
        
            
        findAns(root->left,L,R);
       
        findAns(root->right,L,R);
        if(root->val>=L and root->val<=R)
        {
            sum+=root->val;
        }
            
        
        
    }
    int rangeSumBST(TreeNode* root, int L, int R) {
        findAns(root,L,R);
        return sum;
            
    }
};