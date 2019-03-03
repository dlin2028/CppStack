#pragma once

template <typename T>
class Stack
{
private:
	int curr;
	T* data;

public: 
	Stack<T>();
	~Stack<T>();
	void Push(T);
	T Pop();
	T Peek();

	int Count;
};

#include "Stack.hpp"