/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    /** @param head The linked list's head.
        Note that the head is guaranteed to be not null, so it contains at least one node. */
    Solution(ListNode* head) {
        ln = head;
    }
    
    /** Returns a random node's value. */
    int getRandom() {
        int rd = ln->val;
		  ListNode* temp = ln;
		  static std::default_random_engine e;
		  static std::uniform_real_distribution<double> u(0.0, 1.0);
		  int i = 1;
		  while (temp)
		  {
			  if (u(e) <= 1.0 / i)
				  rd = temp->val;
			  temp = temp->next;
			  i++;
		  }
		  return rd;
    }
private:
ListNode *ln;
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution obj = new Solution(head);
 * int param_1 = obj.getRandom();
 */
