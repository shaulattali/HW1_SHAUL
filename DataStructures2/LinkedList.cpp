#include <iostream>
#include "LinkedList.h"

IntNode* addToHead(IntNode* head, IntNode* n)
{
    n->next = head;
    return n;
}

IntNode* removeFromEnd(IntNode* head)
{
    IntNode* cur = head->next;
    delete head;
    return cur;
}