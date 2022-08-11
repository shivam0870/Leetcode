class Solution {
public:
   
 int sum=0;
    
     void findAns(TreeNode* root, int L, int R){
         
    vector<int> tree;
           if(root==NULL)
            return;
            
        findAns(root->left,L,R);
            findAns(root->right,L,R);
       if(root->val>=L and root->val<=R){
           tree.push_back(root->val);
       }
     
         
        for(int i=0; i<tree.size(); i++){
            sum+=tree[i];
        }
         
     }
    
    int rangeSumBST(TreeNode* root, int L, int R) {
        findAns(root,L,R);
        return sum;
            
    }
};



















//     void findAns(TreeNode* root, int L, int R){
       
//         if(root==NULL)
//             return;
        
            
//         findAns(root->left,L,R);
       
//         findAns(root->right,L,R);
//         if(root->val>=L and root->val<=R)
//         {
//             sum+=root->val;
//         }
            
        
        
//     }