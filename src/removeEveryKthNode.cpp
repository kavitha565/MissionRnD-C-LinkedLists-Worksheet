/*
OVERVIEW: Given a single linked list, remove every Kth node in the linked list.
E.g.: 1->2->3->4->5 and K 2, output is 1->3->5.

INPUTS: A linked list and Value of K.

OUTPUT: Remove every Kth node in the linked list.

ERROR CASES: Return NULL for error cases.

NOTES:
*/

#include <stdio.h>
struct node {
	int num;
	struct node *next;
};
struct node * removeEveryKthNode(struct node *head, int K) {
	if (head == NULL || K <= 1)
		return NULL;
	int i = 0;
	struct node *temp, *prev;
	temp = head;
	while(temp != NULL) 
	{
		i++;
		temp = temp->next;
	}
	int len = i;
	if (K>len)
		return head;
	else
	{
		prev=temp = head;
		for (i = 1; i <=len ; i++)
		{
			if (i % K == 0)
			{
				prev->next = temp->next;
			}
			prev = temp;
			temp = temp->next;
		}
	}
	return(head);
}

