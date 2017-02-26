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
    int minDepth(TreeNode* root) {
        queue<TreeNode*> que;
        if(root==NULL)
            return 0;
        int ans = 1;
        que.push(root);
        while(!que.empty())
        {
            que.push(NULL);
            while(que.front()!=NULL)
            {
                if(que.front()->left==NULL&&que.front()->right==NULL)
                    return ans;
                if(que.front()->left)
                    que.push(que.front()->left);
                if(que.front()->right)
                    que.push(que.front()->right);
                que.pop();
            }
            ans++;
            que.pop();
        }
        return ans;
    }
};