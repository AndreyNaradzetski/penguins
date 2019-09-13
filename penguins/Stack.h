#pragma once
class Stack {
private:
	int* container;
	size_t capacity;
	size_t top;
public:
	Stack();
	~Stack();
	bool IsEmpty();
	bool IsFull();
	void Resize(size_t new_capacity);
	void Push(int);
	void Pop();
	int GetTopElement();
};