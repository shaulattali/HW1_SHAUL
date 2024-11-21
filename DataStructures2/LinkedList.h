#ifndef LINKEDLIST_H
#define LINKEDLIST_H


/* a queue contains positive integer values. */
typedef struct IntNode
{
	int value;
	struct IntNode* next;

} IntNode;

IntNode* addToHead(IntNode* head, IntNode* n);
IntNode* removeFromEnd(IntNode* head);

#endif /* LINKEDLIST_H */