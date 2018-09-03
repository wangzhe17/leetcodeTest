class Solution
{
public:
	ListNode *reverseList(ListNode *head)
	{
		if(!head) return NULL;
		ListNode *dummy = new ListNode(-1);
		dummy->next = head;
		ListNode *cur = head;
		
		while(cur->next)
		{
			ListNode *tmp = cur->next;
			cur->next = tmp->next;
			tmp->next = cur;
			dummy->next = tmp;
		}		
		return dummy->next;
	}
};