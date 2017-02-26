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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*> que;
        stack<TreeNode*> quetemp;
        que.push(root);
        bool flag = true;
        while(!que.empty())
        {
            vector<int> temp;
            while(!que.empty())
            {
                temp.push_back(que.front()->val);
                if(flag)
                {
                    if(que.front()->left)
                        quetemp.push(que.front()->left);
                    if(que.front()->right)
                        quetemp.push(que.front()->right);
                }
                else
                {
                    if(que.front()->right)
                        quetemp.push(que.front()->right);
                    if(que.front()->left)
                        quetemp.push(que.front()->left);
                }
                que.pop();
            }
            while(!quetemp.empty())
            {
                que.push(quetemp.top());
                quetemp.pop();
            }
            ans.push_back(temp);
            flag = !flag;
        }
        return ans;
    }
};