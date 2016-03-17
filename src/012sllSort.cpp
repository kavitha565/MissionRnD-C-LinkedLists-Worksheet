/*
OVERVIEW:  Given a single linked list of 0s 1s and 2s ,Sort the SLL such that zeroes 
will be followed by ones and then twos.


INPUTS:  SLL head pointer

OUTPUT: Sorted SLL ,Head should Finally point to an sll of sorted 0,1,2


ERROR CASES:

NOTES: Only 0,1,2, will be in sll nodes
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int data;
	struct node *next;
};
void sll_012_sort(struct node *head){

	int i;
	struct node *temp1, *temp2;
	for (temp1 = head; temp1 != NULL; temp1 = temp1->next)
	{
		for (temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next)
		{
			if ((temp1->data)>(temp2->data))
			{
				i = temp1->data;
				temp1->data = temp2->data;
				temp2->data = i;
			}
		}
	}
}