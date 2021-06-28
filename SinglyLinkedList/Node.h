#pragma once
template <class T>
class Node {
private:
	T val;
	Node<T>* next;

public:
	Node();
	Node(T);
	Node(T, Node<T>*);
	~Node();
		
	T getVal();
	Node<T>* getNext();
	void setVal(T);
	void setNext(Node<T>*);
};

