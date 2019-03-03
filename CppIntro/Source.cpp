#include <iostream>
#include <string>
#include "Stack.h"

int main()
{
	std::cout << "Hello World!" << std::endl;
	
	Stack<int> stack;

	while (true)
	{
		int val;
		std::cin >> val;

		if (val == 0)
		{
			std::cout << stack.Peek();
		}
		else if (val == 1)
		{
			std::cout << stack.Pop();
		}
		else// if (val == 2)
		{
			std::cout << "enter a value" << std::endl;
			int input;
			std::cin >> input;
			stack.Push(input);
		}
	}

	return 0;
}