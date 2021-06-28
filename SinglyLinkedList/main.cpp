#include<iostream>
#include "Node.cpp"
using namespace std;

int main() {
	Node<int> node(3);
	cout << node.getVal();
	return 0;
}