class Solution
{
public:
	ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
	{
        if (!headA || !headB) return NULL;

		int lenA = getLength(headA), lenB = getLength(headB);
		if (lenA < lenB)
		{
			for (int i = 0; i < lenB - lenA; ++i)
			{
				headB = headB->next;
			}
		}
		if(lenA > lenB)
		{
			for (int i = 0; i < lenA - lenB; ++i)
			{
				headA = headA->next;
			}
		}
		ListNode *same;
		while(headA && headB && headA != headB)
		{
			headA = headA->next;
			headB = headB->next;
		}
        return (headA && headB) ? headA : NULL;
	}

	int getLength(ListNode *head)
	{
		int cnt = 0;
		while(head)
		{
			cnt++;
			head= head->next;
		}
		return cnt;
	}
};