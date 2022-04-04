#pragma once
#include <iostream>
#include <vector>
using namespace std;

template <typename T>
struct Node {
	T key;
	Node* next;
	Node(T key) {
		this->key = key;
		this->next = NULL;
		
	}
};

template <typename T>
class LinkedList {
	private:
		Node<T>* head;
	public:
		LinkedList() {
			head = NULL;
		}
		void add(const T& key) {
			if (head == NULL) {
				head = new Node<T>(key);
				head->next = NULL;
			}
			else {
				
				Node<T>* node = new Node<T>(key);
				node->next = head;
				head = node;
			}
			//Node<T>* tmp = head;

		}

		vector<T> toVector(void) {
			vector<T> ret_val;
			Node<T>* curr;
			curr = head;
			while (curr != NULL) {
				ret_val.push_back(curr->key);
				curr = curr->next;
			}
			return ret_val;
		}

		void addBack(T key) {

			if (head != NULL) {
				Node<T>* curr;
				curr = head;
				while (curr->next != NULL) {
					curr = curr->next;
				}
				Node<T>* node = new Node<T>(key);
				curr->next = node;
				node->next = NULL;
			}
			else {
				head = new Node<T>(key);
				head->next = NULL;
			}
		}

		int size() {
			Node<T>* curr = head;
			int count = 0;
			while (curr != NULL) {
				count++;
				curr = curr->next;
			}
			return count;
		}

		void print(void) {
			Node<T>* curr;
			curr = head;
			while (curr != NULL) {
				cout << curr->key << " ";
				curr = curr->next;
			}
			cout << endl;
		}
		
		bool isEmpty(){
			Node<T>* curr;
			curr = head;
			if (curr != NULL) 
				return false;
			else
				return true;
		}
		
		T returnTop(){
			Node<T>* curr;
			curr = head;
			while (curr -> next != NULL) {
				curr = curr->next;
			}
			return curr -> key;
			
		}
		
		void listPop(){
			Node<T>* curr;
			Node<T>* preCurr;
			curr = head;
			preCurr = head;
			while (curr -> next != NULL) {
				curr = curr->next;
			}
			while (preCurr -> next != curr){
				preCurr = preCurr -> next;
			}
			curr = preCurr;
			curr -> next = NULL;
			preCurr = NULL;
			delete preCurr;
		}

		void release() {
			Node<T>* curr;
			curr = head;
			while (curr != NULL) {
				Node<T>* former = curr;
				curr = curr->next;
				if(former)
					delete former;
			}

		}
		Node<T>* getHead() {
			return head;
		}
		~LinkedList() {
			release();
		}

};
