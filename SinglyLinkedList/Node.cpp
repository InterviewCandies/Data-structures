#include "Node.h"

template<class T>
Node<T>::Node(): next(nullptr) {

}

template<class T>
Node<T>:: Node(T val): val(val), next(nullptr) {

}

template<class T>
Node<T>::Node(T val, Node<T>* next) : val(val), next(next) {

}

template<class T>
Node<T>:: ~Node() {

}

template<class T>
T Node<T>::getVal() {
	return this->val;
}

template<class T>
Node<T>* Node<T>::getNext() {
	return this->next;
}

template<class T>
void Node<T>::setVal(T val) {
	this->val = val;
}

template<class T>
void Node<T>::setNext(Node<T>* next) {
	this->next = next;
}