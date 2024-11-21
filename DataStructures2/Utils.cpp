using namespace std;
#include <iostream>
#include "Utils.h"
#include "Stack.h"

// This Function Get Array And Their Size And Turns Them
// Input: The Nums Array And The Array Size
// Output: None
void reverse(int* nums, unsigned int size)
{
	unsigned int i = 0, j = 0;
	Stack* myStack = new Stack();

	initStack(myStack);

	for (i = 0; i < size; i++)
	{
		push(myStack, nums[i]);
	}
	for (i = 0; i < size; i++)
	{
		nums[i] = pop(myStack);
	}

	cleanStack(myStack);
}

// This Function Ask The User For 10 Numbers And Return The Reversed Array
// Input: None
// Output: The Reversed Array
int* reverse10()
{
	int length = 10, i = 0;
	int* reversedArray = new int[length];
	Stack* myStack = new Stack();

	initStack(myStack);

	cout << "Pleae Enter 10 Numbers: ";
	for (i = 0; i < length; i++)
	{
		std::cin >> reversedArray[i];
	}

	for (i = 0; i < length; i++)
	{
		push(myStack, reversedArray[i]);
	}

	for (i = 0; i < length; i++)
	{
		reversedArray[i] = pop(myStack);
	}

	cleanStack(myStack);
	return reversedArray;
}