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
    void sumtree(TreeNode* root, bool flag)
    {
        if(root==NULL) 
            return;
        if(root->left==NULL&&root->right==NULL&&flag)
            ans+=root->val;
        sumtree(root->left, true);
        sumtree(root->right, false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        ans = 0;
        sumtree(root,false);
        return ans;
    }
private:
    int ans;
};