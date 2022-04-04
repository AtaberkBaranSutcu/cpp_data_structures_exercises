#pragma once
#include <iostream>
#include <vector>
#include <cmath>
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
		}

		void print(void) {
			Node<T>* curr;
			curr = head;
			while (curr != NULL) {
				cout << curr->key << endl;
				curr = curr->next;
			}
		}
		
		Node<T>* getHead() {
			return head;
		}
		
		void release() {
			Node<T>* curr;
			curr = head;
			while (curr != NULL) {
				Node<T>* former = curr;
				curr = curr->next;
				if (former)
					delete former;
			}

		}
		
		vector<T> toVector(void){
			Node<T> *curr;
			curr = head;
			
			// Declare vector v
			vector<T> v;
			int i = 0;
			
			while(curr != NULL){
				// Add curr -> key to v
				v[i] = curr -> key;
				curr = curr -> next;
				i++;
			}
			// Return vector v 
			return v;
		}
	
		void addBack(const T &key){
			Node<T> *curr;
			curr = head;
			if (head == NULL) {
				head = new Node<T>(key);
				head->next = NULL;
			}
			else {
				Node<T>* node = new Node<T>(key);
				
				while(curr -> next != NULL){
				
				 	curr = curr -> next;
				}
				
				curr -> next = node;
				curr -> next -> next = NULL;		
			}
				
		}
		
		void duplicateAll(void){
			Node<T> *curr;
			curr = head;
			
			while(curr != NULL){
				Node<T>* node = new Node<T>(curr -> key);
				node -> next = curr -> next;
				curr -> next = node;
				curr = curr -> next -> next;
			}	
		}
		
		
		void insertAtPos(T key, int pos) {
			Node<T> *curr;
			curr = head;
			Node<T>* node = new Node<T>(key);	
			
			if(pos == 0){
				add(key);
			}
			else{
				
				for(int i = 1 ; i < pos ; i++){
					curr = curr -> next;
				}
				
				node -> next = curr -> next;
				curr -> next = node;	
			}		
		}
		
		void removeDuplicates(void){
			Node<T> *curr;
			curr = head;
			
			while(curr -> next != NULL){
					
				if(curr -> key == curr -> next -> key){
		
					curr -> next = curr ->next -> next;
						
				}
				else 
					curr = curr -> next;
			}
		}	
		
		int binaryToDecimal(){
			Node<T> *curr;
			curr = head;
			int i = 1, res = 0;	
			
			while(curr != NULL){
				
				if(curr -> key == 1){
				
					curr = curr -> next;
					
					res += pow(2 , 10 - i);
				}
			
				else{		
					
					curr = curr -> next;	
				}
				i++;
			}
			return res;		
		}
		
		void decimalToBinary(){
			Node<T> *curr;
			curr = head;
			LinkedList<T> binList;
			int x[10], i, data;
			data = curr -> key;
		
			for(i = 0; data > 0; i++){    	
				x[i] = data % 2;    
				data = data / 2; 
				binList.addBack(x[i]);
			}	
			binList.print();
		}
		
		
		~LinkedList(){
			release();
		}

};

