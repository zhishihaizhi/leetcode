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
    void inOrder(TreeNode* root)
    {
        if(root==NULL)
            return;
        if(root->left)
            inOrder(root->left);
        if(firstnum)
        {
            cur = root->val;
            firstnum = false;
        }
        else
        {
            if(root->val == cur)
                count++;
            else
            {
                if(count==mostcount)
                {
                    ans.push_back(cur);
                }
                if(count>mostcount)
                {
                    ans.clear();
                    ans.push_back(cur);
                    mostcount = count;
                }
                count = 0;
                cur = root->val;
            }
        }
        if(root->right)
            inOrder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        count = 0;
        firstnum = true;
        mostcount = 0;
        count = 0;
        if(root==NULL)
            return ans;
        inOrder(root);
        if(count==mostcount)
        {
            ans.push_back(cur);
        }
        if(count>mostcount)
        {
            ans.clear();
            ans.push_back(cur);
            mostcount = count;
        }
        return ans;
    }
private:
    vector<int> ans;
    size_t mostcount;
    size_t count;
    int cur;
    bool firstnum;
};