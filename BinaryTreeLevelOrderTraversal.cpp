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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*> que;
        que.push(root);
        while(!que.empty())
        {
            que.push(NULL);
            vector<int> temp;
            while(que.front()!=NULL)
            {
                temp.push_back(que.front()->val);
                if(que.front()->left)
                    que.push(que.front()->left);
                if(que.front()->right)
                    que.push(que.front()->right);
                que.pop();
            }
            if(que.front()==NULL)
            {
                ans.push_back(temp);
                que.pop();
            }
        }
        return ans;
    }
};