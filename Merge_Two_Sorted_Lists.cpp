#include <iostream>

  using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
        ListNode *p1, *p2, *head;
        if (l1 && l2)
        	p1 = head = (l1->val < l2->val ? l1 : l2);
        else 
        	return (l1 ? l1 :l2);
        p2 = p1 == l1 ? l2 : l1;
        while(p1->next && p2) {
			if (p1->val <= p2->val && p2->val <= p1->next->val){
        		ListNode *temp = p2;
        		p2 = p2->next;
        		temp->next = p1->next;
        		p1->next = temp;
        	}
    		p1 = p1->next;
        }
        if (p1->next == NULL)
            p1->next = p2;
        return head;
    }
};