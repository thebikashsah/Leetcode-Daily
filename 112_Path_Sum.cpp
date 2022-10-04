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
        bool pre(TreeNode* root,int targetSum,int sum){
                if(root==NULL){
                        return false;
                }
                sum+=root->val;
                if(root->left==NULL && root->right==NULL){
                        
                        if(sum==targetSum){
                                return true;
                        }
                }
                
                bool l=pre(root->left,targetSum,sum);
                bool r=pre(root->right,targetSum,sum);
                
                if(l || r){
                        return true;
                }
                sum-=root->val;
                return false;
                
        }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return pre(root,targetSum,0);
    }
};
