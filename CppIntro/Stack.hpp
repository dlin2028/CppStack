#pragma once


template <typename T>
Stack<T>::Stack()
{
	data = new T[20];
	Count = 0;
	curr = 0;
}
template <typename T>
Stack<T>::~Stack()
{
	data = nullptr;
	Count = 0;
	curr = 0;
}
template <typename T>
void Stack<T>::Push(T value)
{
	data[++curr] = value;

	Count++;
}
template <typename T>
T Stack<T>::Pop()
{
	Count--;

	return data[curr--];
}
template <typename T>
T Stack<T>::Peek()
{
	return data[curr];
}