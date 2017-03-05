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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(!root)
            return NULL;
        if(key<root->val)
            root->left = deleteNode(root->left,key);
        else if(key>root->val)
            root->right = deleteNode(root->right,key);
        else
        {
            if(!root->left&&!root->right)
                root=NULL;
            else if(root->left==NULL)
                root = root->right;
            else if(root->right ==NULL)
                root = root->left;
            else
            {
                TreeNode * temp = root->left;
                while(temp->right)
                    temp = temp->right;
                root->val = temp->val;
                root->left = deleteNode(root->left,temp->val);
            }
        }
        return root;
    }
};