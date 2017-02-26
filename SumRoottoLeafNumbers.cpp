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
    void dfs(TreeNode* root, long cursum)
    {
        cursum = cursum*10 + root->val;
        if(root->left==NULL&&root->right==NULL)
        {
            ans+= cursum;
        }
        if(root->left)
            dfs(root->left,cursum);
        if(root->right)
            dfs(root->right,cursum);
    }
    int sumNumbers(TreeNode* root) {
        ans = 0;
        if(root==NULL)
            return 0;
        dfs(root,0);
        return ans;
    }
private:
    long ans;
};