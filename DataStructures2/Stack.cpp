#include <iostream>
#include "Stack.h"
#include "LinkedList.h"

// This Function Add Values Into The Array
// Input: The Queue Itself And The New Value
// Output: None
void push(Stack* s, unsigned int element)
{
	IntNode* newNode = new IntNode();
	newNode->value = element;
	newNode->next = nullptr;
	
	s->top = addToHead(s->top, newNode);
	s->_count++;
}

// This Function Remove Values From The Array
// Input: The Queue Itself
// Output: None
int pop(Stack* s)
{
	int value = s->top->value;

	IntNode* newTop = removeFromEnd(s->top);
	s->top = newTop;
	s->_count--;

	return value;
}

// This Function Init The Stack
// Input: The Stack Itself
// Output: None
void initStack(Stack* s)
{
	s->_count = 0;
	s->top = nullptr;
}

// This Function Clean The Queue
// Input: The Queue Itself
// Output: None
void cleanStack(Stack* s)
{
	//While loop until the end
	while (s->top != nullptr)
	{
		s->top = removeFromEnd(s->top);
	}
	s->_count = 0;
}

// This Function Check If The Stack Is Empty
// Input: The Stack Itself
// Output: If The Stack Is Empty
bool isEmpty(Stack* s)
{
	return s->_count == 0;
}

// This Function Check If The Stack Is Full
// Input: The Stack Itself
// Output: If The Stack Is Full
bool isFull(Stack* s)
{
	return s->_count >= 1;
}
