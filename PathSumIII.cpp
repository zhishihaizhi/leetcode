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
    int path(TreeNode* root, int sum, int cursum)
    {
        int count = 0;
        if(root==NULL)
            return 0;
        if(sum==cursum+root->val)
            count+=1;
        count += path(root->left, sum, cursum+root->val);
        count += path(root->right, sum, cursum+root->val);
        return count;
    }
    int pathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return 0;
        int count = path(root,sum,0)+pathSum(root->left,sum)+pathSum(root->right,sum);
        return count;
    }
};