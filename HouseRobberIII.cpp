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
    int robthis(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        if(root->left==NULL&&root->right==NULL)
            return root->val;
        return max(root->val+notrob(root->left)+notrob(root->right),robthis(root->left)+robthis(root->right));
    }
    int notrob(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        if(root->left==NULL&&root->right==NULL)
            return 0;
        return robthis(root->left)+robthis(root->right);
    }
    int rob(TreeNode* root) {
        return max(robthis(root),notrob(root));
    }
};