/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool sumall(TreeNode* root, int sum, int cursum)
    {
        if(root==NULL)
            return false;
        if(root->left==NULL&&root->right==NULL)
        {
            if(sum==cursum+root->val)
                return true;
            else
                return false;
        }
        return sumall(root->left,sum,cursum+root->val)||sumall(root->right,sum,cursum+root->val);
    }
    bool hasPathSum(TreeNode* root, int sum) {
        return sumall(root,sum,0);
    }
};