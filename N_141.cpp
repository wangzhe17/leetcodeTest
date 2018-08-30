class Solution
{
public:
	bool hasCycle(ListNode *head)
	{
		if(!head) return false;
		ListNode *fast = head, *slow = head;
		while(true)
		{
			fast = fast->next->next;
			slow = slow->next;
			if(fast == slow) return true;
		}
		if(fast == NULL) return false;
	}
};