class Solution
{
public:
	ListNode *deleteDuplicates(ListNode *head)
	{
		if (!head || !head->next)
		{
			return head;
		}
		ListNode *cur = head;
		while(cur && cur->next)
		{
			if (cur->val == cur->next->val)
			{
				ListNode *tmp = cur->next;
				cur->next = cur->next->next;
				delete tmp;
			}else{
				cur = cur->next;
			}
		}
		return head;
	}
};