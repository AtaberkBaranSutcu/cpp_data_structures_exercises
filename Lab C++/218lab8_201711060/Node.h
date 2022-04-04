#pragma once
#include <cstdlib>
template <class T>
class Node {
	
	public:
		Node<T>* l;
		Node<T>* r;
		T data;
		int dCount;
		
		Node<T>(T data) {
			this->data = data;
			l = NULL;
			r = NULL;	
			dCount=1;
		}
};
