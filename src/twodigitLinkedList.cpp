/*
OVERVIEW:  Given a single linked list (two digits as a node).Convert that to number


INPUTS:  SLL head pointer

OUTPUT: Create a number from the linked list given ,In each node there are two numbers ,digit1 and digit1 ,
So if the nodes are 12->34->56->78 , Final number would be 12345678 ( Integer)

ERROR CASES:

NOTES: Only Postive Numbers
*/

#include <stdio.h>
#include <malloc.h>

struct node {
	int digit1;
	int digit2;
	struct node *next;
}*temp;

int convert_sll_2digit_to_int(struct node *head){
	int num = 0, n1, n2;
	for (temp = head; temp != NULL; temp = temp->next)
	{
		n1 = temp->digit1;
		n2 = temp->digit2; 
		num = (((num * 10) + n1) *10) + n2;
	}
	return num;
}
