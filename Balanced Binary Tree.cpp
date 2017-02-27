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
    int treeHei(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        if(root->left==NULL&&root->right==NULL)
            return 1;
        int a = treeHei(root->left);
        if(a==-1) return -1;
        int b=treeHei(root->right);
        if(b==-1||abs(a-b)>1)
            return -1;
        return max(a,b)+1;
    }
    bool isBalanced(TreeNode* root) {
        if(treeHei(root)==-1)
            return false;
        return true;
    }
};