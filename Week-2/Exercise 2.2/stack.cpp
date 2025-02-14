#include "stack.h"
#include <iostream>
#include <cstdlib>
using namespace std;

template<class ItemType>
Stack<ItemType>::Stack() {
	maxStack = 500;
	top = -1;
	items = new ItemType[maxStack];
}

template<class ItemType>
Stack<ItemType>::Stack(int max) {
	maxStack = max;
	top = -1;
	items = new ItemType[maxStack];
}

template<class ItemType>
Stack<ItemType>::~Stack() {
	delete[] items;
}

template<class ItemType>
int Stack<ItemType>::IsEmpty() const {
	return (top == -1);
}

template<class ItemType>
int Stack<ItemType>::IsFull() const {
	return (top == maxStack - 1);
}

template<class ItemType>
void Stack<ItemType>::push(ItemType newItem) {
	if (IsFull()) {
		cout << "Stack Overflow" << endl;
		exit(1);
	}
	top++;
	items[top] = newItem;
}

template<class ItemType>
void Stack<ItemType>::pop(ItemType& newItem) {
	if (IsEmpty()) {
		cout << "Stack Underflow" << endl;
		exit(1);
	}

	newItem = items[top];
	top--;
}