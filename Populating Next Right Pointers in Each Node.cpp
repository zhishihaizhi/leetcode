/**
 * Definition for binary tree with next pointer.
 * struct TreeLinkNode {
 *  int val;
 *  TreeLinkNode *left, *right, *next;
 *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 * };
 */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        queue<TreeLinkNode*> que;
        if(root==NULL)
            return;
        que.push(root);
        while(!que.empty())
        {
            que.push(NULL);
            while(que.front()!=NULL)
            {
                TreeLinkNode *temp = que.front();
                if(temp->left)
                    que.push(temp->left);
                if(temp->right)
                    que.push(temp->right);
                que.pop();
                temp->next = que.front();
            }
            que.pop();
        }
    }
};