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
        void pre(TreeNode* root,int val,int depth,int count){
                // if(root==NULL)
                //         return;
                
                if(count==depth-1){
                        TreeNode* l=root->left;
                        TreeNode* r=root->right;
                        root->left=new TreeNode(val);
                        root->left->left=l;
                        root->right=new TreeNode(val);
                        root->right->right=r;
                        return;
                }
                
                count++;
                if(root->left!=NULL)
                        pre(root->left,val,depth,count);
                
                if(root->right!=NULL)
                        pre(root->right,val,depth,count);
                count--;
                return;
        }
        
        
    TreeNode* addOneRow(TreeNode* root, int val, int depth) {
            if(depth==1){
                        TreeNode* l=root;
                        root=new TreeNode(val);
                        root->left=l;
                        root->right=NULL;
                        return root;
                        
                }
            pre(root,val,depth,1);
            
            return root;
        
    }
};
