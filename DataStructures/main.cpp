//#include <iostream>
//#include "Queue.h"
//
//int main()
//{
//	int i = 0;
//	bool isEmptyFlag = false, isFullFlag = false;
//
//	Queue* MyQueue = new Queue;
//
//	initQueue(MyQueue, 5);
//
//	std::cout << "initQueue: \n";
//	for (i = 0; i < 5; i++)
//	{
//		std::cout << MyQueue->_elements[i];
//	}
//	std::cout << "\n\n";
//
//	i = 0;
//
//	std::cout << "enqueue: \n";
//	for (i = 0; i < 5; i++)
//	{
//		enqueue(MyQueue, i);
//	}
//
//	i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		std::cout << MyQueue->_elements[i];
//	}
//	std::cout << "\n\n";
//
//	std::cout << "dequeue: \n";
//	dequeue(MyQueue);
//
//	i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		std::cout << MyQueue->_elements[i];
//	}
//	std::cout << "\n\n";
//
//	i = 0;
//
//	std::cout << "cleanQueue: \n";
//	for (i = 0; i < 5; i++)
//	{
//		cleanQueue(MyQueue);
//	}
//
//	i = 0;
//
//	for (i = 0; i < 5; i++)
//	{
//		std::cout << MyQueue->_elements[i];
//	}
//	std::cout << "\n\n";
//
//	std::cout << "isEmpty: \n";
//	isEmptyFlag = isEmpty(MyQueue);
//	std::cout << isEmptyFlag;
//	std::cout << "\n\n";
//
//	std::cout << "isFull: \n";
//	isFullFlag = isFull(MyQueue);
//	std::cout << isFullFlag;
//	std::cout << "\n\n";
//
//	return 0;
//}