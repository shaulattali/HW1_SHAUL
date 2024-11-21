//#include <iostream>
//#include "Stack.h"
//
//int main()
//{
//	Stack myStack;
//	IntNode* current;
//
//	myStack.top = NULL;
//	initStack(&myStack);
//
//	std::cout << "The Value In The Linked List: \n";
//	
//	//Add all the values
//	push(&myStack, 10);
//	push(&myStack, 20);
//	push(&myStack, 30);
//
//	current = myStack.top;
//
//	while (current != NULL)
//	{
//		std::cout << current->value << " ";
//		current = current->next;
//	}
//
//	std::cout << "\n\nPop In The Linked List: \n";
//
//	//Remove only one
//	pop(&myStack);
//
//	current = myStack.top;
//
//	while (current != NULL)
//	{
//		std::cout << current->value << " ";
//		current = current->next;
//	}
//
//	std::cout << "\n\nThe List After Cleaning: \n";
//
//	cleanStack(&myStack);
//
//	current = myStack.top;
//
//	while (current != NULL)
//	{
//		std::cout << current->value << " ";
//		current = current->next;
//	}
//
//	if (isEmpty(&myStack))
//	{
//		std::cout << "\n\nThe List Is Empty \n";
//	}
//	if (isFull(&myStack))
//	{
//		std::cout << "\n\nThe List Is Full \n";
//	}
//	return 0;
//}