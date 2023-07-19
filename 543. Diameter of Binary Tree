class Solution {
    private:
    int height(TreeNode* root) {
        if(root==NULL)
            return 0;
        int l=height(root->left);
        int r=height(root->right);
       return max(l,r)+1;
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        if(root==NULL)
            return 0;
        int o1=diameterOfBinaryTree(root->left);
        int o2=diameterOfBinaryTree(root->right);
        int o3=height(root->left)+height(root->right);
        return max(o1,max(o2,o3));
    }
};
