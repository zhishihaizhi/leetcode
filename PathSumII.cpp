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
    void dfs(TreeNode* root, int sum, int cursum, vector<int> curpath)
    {
        if(root==NULL)
            return;
        if(root->left==NULL&&root->right==NULL)
        {
            if(cursum+root->val==sum)
            {
                curpath.push_back(root->val);
                ans.push_back(curpath);
            }
            else
                return;
        }
        vector<int> temp = curpath;
        temp.push_back(root->val);
        dfs(root->left,sum,cursum+root->val,temp);
        dfs(root->right,sum,cursum+root->val,temp);
    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<int> curpath;
        dfs(root,sum,0,curpath);
        return ans;
    }
private:
    vector<vector<int>> ans;
};