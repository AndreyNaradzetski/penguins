#include"Stack.h"
#include<algorithm>

Stack::Stack() {
	capacity = 0;
	top = -1;
}

bool Stack::IsEmpty() {
	return top == -1;
}

bool Stack::IsFull() {
	return (top + 1) == capacity;
}

void Stack::Resize(size_t new_capacity) {
	capacity = new_capacity;
	int* new_container = new int[new_capacity];
	for (int i = 0; i <= std::min(top, new_capacity - 1); i++) {
		new_container[i] = container[i];
	}
	container = new_container;
	return;
}

void Stack::Push(int number) {
	if (this->IsFull()) {
		this->Resize((capacity + 1) * 2);
	}
	top++;
	container[top] = number;
	return;
}

void Stack::Pop() {
	if (this->IsEmpty()) {
		return;
	}
	top--;
	if ((top + 1) * 2 <= capacity) {
		this->Resize(top + 1);
	}
	return;
}

int Stack::GetTopElement() {
	return container[top];
}

