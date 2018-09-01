class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy = new ListNode(-1), *pre = dummy;
        dummy->next = head;
        while(pre->next)
        {
        	if(pre->next->val == val) 
        	{
        		ListNode *t = pre->next;
        		pre->next = t->next;
        		t->next = NULL;
        		delete t;

        	}
        	else pre = pre->next;
        }
        return dummy->next;

    }
};