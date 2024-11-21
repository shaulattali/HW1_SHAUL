//#include <iostream>
//#include "LinkedList.h"
//
//int main()
//{
//	IntNode* MyList = NULL;
//
//	//Do for loop to add all the values (in my case 1-5)
//	for (int i = 0; i < 5; i++)
//	{
//		IntNode* newNode = new IntNode;
//		//i+1 so it's not gonna be 0
//		newNode->value = i + 1;
//
//		//Call the function addToHead()
//		MyList = addToHead(MyList, newNode);
//	}
//
//	std::cout << "The Value In The Linked List: \n";
//	IntNode* current = MyList;
//
//	while (current != NULL)
//	{
//		std::cout << current->value << " ";
//		current = current->next;
//	}
//
//	std::cout << std::endl;
//
//	for (int i = 0; i < 5; i++)
//	{
//		//Call the function removeFromEnd()
//		MyList = removeFromEnd(MyList);
//	}
//
//	std::cout << "\nThe Value In The Linked List: \n";
//	current = MyList;
//
//	while (current != NULL)
//	{
//		std::cout << current->value << " ";
//		current = current->next;
//	}
//
//	std::cout << "\n";
//
//	return 0;
//}