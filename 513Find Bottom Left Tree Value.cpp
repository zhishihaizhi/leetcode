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
    int findBottomLeftValue(TreeNode* root) {
        int ans;
        queue<TreeNode*> que;
        if(root==NULL)
            return -1;
        que.push(root);
        while(!que.empty())
        {
            que.push(NULL);
            ans = que.front()->val;
            while(que.front())
            {
                if(que.front()->left)
                    que.push(que.front()->left);
                if(que.front()->right)
                    que.push(que.front()->right);
                que.pop();
            }
            que.pop();
        }
        return ans;
    }
};