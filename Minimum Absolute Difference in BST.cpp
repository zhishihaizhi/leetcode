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
	 void getMin(TreeNode* root)
	 {
		 if (root == NULL)
			 return;
		 if (root->left)
			 getMin(root->left);
		 if (flag == true)
		 {
			 flag = false;
			 first = root->val;
		 }
		 else
		 {
			 int temp = abs(root->val - first);
			 if (temp<minval)
				 minval = temp;
			 first = root->val;
		 }
		 if (root->right)
			 getMin(root->right);
	 }
	 int getMinimumDifference(TreeNode* root) {
		 minval = 2147483647;
		 flag = true;
		 if (root == NULL)
			 return -1;
		 getMin(root);
		 return minval;
	 }
 private:
	 bool flag;
	 int first;
	 int minval;
 };