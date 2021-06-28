#pragma once
#include "Node.h"

template<class T>
class SinglyLinkedList {
private:
	Node<T>* head, tail;
	int length;
public: 
	SinglyLinkedList();
	~SinglyLinkedList();

	void pushBack(T);
	T popBack();
	void pushFront(T);
	T popFront();
	T front();
	T back();
	void insert(int, T);
	void erase(int, T);
	void reverse();
	void rotate(int);
};
