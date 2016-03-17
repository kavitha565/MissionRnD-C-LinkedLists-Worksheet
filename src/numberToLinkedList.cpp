/*
OVERVIEW:  Given a number convert that to single linked list (each digit as a node).
E.g.: Input: 234, Output: 2->3->4.

INPUTS:  A number.

OUTPUT: Create linked list from given number, each digit as a node.

ERROR CASES: 

NOTES: For negative numbers ignore negative sign.
*/

#include <stdio.h>
#include <malloc.h>
struct node {
	int num;
	struct node *next;
}*head,*current, *new_node;

void create_node(int r)
{
	new_node = (struct node*)malloc(sizeof(struct node));
	new_node->num = r;
	new_node->next = NULL;
	if (head == NULL)
	{
		head = new_node;
		current = new_node;
	}
	else
	{
		current->next = new_node;
		current = new_node;
	}
}

struct node * numberToLinkedList(int N) {
	head = NULL;
	int i, r, rev = 0;
	if (N == 0)
		create_node(N);
	if (N < 0)
		N = -N;
	while (N > 0)
	{
		rev = rev * 10;
		rev = rev + N % 10;
		N = N / 10;
	}
	N = rev;
	while (N > 0)
	{
		r = N % 10;
		create_node(r);
		N = N / 10;
	}
	return(head);
}