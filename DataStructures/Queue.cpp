#include <iostream>
#include "Queue.h"

// This Function Init The Queue
// Input: The Queue Itself And The Size
// Output: None
void initQueue(Queue* q, unsigned int size)
{
	int i = 0;

	// Init the index
	q->_count = 0;
	q->_maxSize = size;
	q->_firstIndex = 0;
	q->_lastIndex = 0;

	q->_elements = new unsigned int[size];

	for (i = 0; i < size; i++)
	{
		q->_elements[i] = NULL;
	}
}

// This Function Add Values Into The Array
// Input: The Queue Itself And The New Value
// Output: None
void enqueue(Queue* q, unsigned int newValue)
{
	int i = 0;

	if (isFull(q))
		return;

	q->_elements[q->_lastIndex] = newValue;

	if (q->_lastIndex == q->_maxSize - 1)
	{
		q->_lastIndex = 0;
	}
	else
	{
		q->_lastIndex++;
	}

	q->_count++;
}

// This Function Remove Values From The Array
// Input: The Queue Itself
// Output: None
int dequeue(Queue* q)
{
	int i = 0, first;

	if (isEmpty(q))
		return -1;

	first = q->_elements[q->_firstIndex];

	if (q->_firstIndex == q->_maxSize - 1)
	{
		q->_firstIndex = 0;
	}
	else
	{
		q->_firstIndex++;
	}

	q->_count--;

	return first;

}

// This Function Clean The Queue
// Input: The Queue Itself
// Output: None
void cleanQueue(Queue* q)
{
	int i = 0;

	for (i = 0; i < q->_maxSize; i++)
	{
		q->_elements[i] = NULL;
	}

	q->_count = 0;
	q->_firstIndex = 0;
	q->_lastIndex = 0;
}

// This Function Check If The Queue Is Empty
// Input: The Queue Itself
// Output: If The Queue Is Empty
bool isEmpty(Queue* s)
{
	return s->_count == 0;
}

// This Function Check If The Queue Is Full
// Input: The Queue Itself
// Output: If The Queue Is Full
bool isFull(Queue* s)
{
	return s->_count == s->_maxSize;
}