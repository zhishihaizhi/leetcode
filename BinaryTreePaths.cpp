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
    void dfs(TreeNode* root, string path)
    {
        string temp = path;
        temp+="->";
        temp+=to_string(root->val);
        if(root->left==NULL&&root->right==NULL)
        {  
            ans.push_back(temp);
            return;
        }
        if(root->left)
        {
            dfs(root->left,temp);
        }
        if(root->right)
            dfs(root->right,temp);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        if(root==NULL)
            return ans;
        string str = to_string(root->val);
        if(root->left==NULL&&root->right==NULL)
        {
            ans.push_back(str);
            return ans;
        }
        if(root->left)
            dfs(root->left,str);
        if(root->right)
            dfs(root->right,str);
        return ans;
    }
private:
    vector<string> ans;
};