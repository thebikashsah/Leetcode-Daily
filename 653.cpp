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
        
        bool search(TreeNode* root,int vali,int k){
                if(root==NULL)
                        return false;
                if(root->val==vali && k-root->val!=vali){
                        return true;
                }
                
                if(root->val >vali){
                       return search(root->left,vali,k);
                }else{
                       return search(root->right,vali,k);
                }
                // return false;
        }
        
        bool find(TreeNode* root,int k,TreeNode* temp){
                if(root==NULL){
                        return false;
                }
                
                bool h=search(temp,k-root->val,k);
                if(h==true){
                        return true;
                }
                
                
                return find(root->left,k,temp) || find(root->right,k,temp);
                
        }
        
    bool findTarget(TreeNode* root, int k) {
            
            if(root->left==NULL && root->right==NULL){
                    return false;
            }
            // TreeNode* temp=root;
            
            return find(root,k,root);
            
            
            
            
            
        
    }
};
