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
    bool inOrder(TreeNode* root)
    {
        bool ans = true;
        if(root->left)
            ans = ans&&inOrder(root->left);
        if(isfirst==true)
        {
            lastnum = root->val;
            isfirst = false;
        }
        else
        {
            if(root->val<=lastnum)
                return false;
            lastnum = root->val;
        }
        if(root->right)
            ans = ans&&inOrder(root->right);
        return ans;
    }
    bool isValidBST(TreeNode* root) {
        if(root==NULL)
            return true;
        isfirst = true;
        return inOrder(root);
    }
private:
    int lastnum;
    bool isfirst;
};