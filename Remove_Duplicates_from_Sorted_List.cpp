#include <iostream>

using namespace std;

  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 
class Solution {
public:
    ListNode *deleteDuplicates(ListNode *head) {
    	ListNode *p = head;
    	while(p && p->next) {
    		if (p->val == p->next->val){
    			p->next = p->next->next;
				continue;    			
    		}
    		p = p->next;
    	}
        return head;
    }
};