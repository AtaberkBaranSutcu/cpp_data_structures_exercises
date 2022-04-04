#pragma once
#include "Node.h"
#include <fstream>
#include <iostream>
#include <algorithm>
using namespace std;
template <class T>
class BinaryTree {
	public:
		Node<T>* root;
		BinaryTree() {
			root = NULL;
		}
		~BinaryTree() {
			deleteNode(root);
		}
		void deleteNode(Node<T>* node) {
			if (node == NULL)
				return;
			Node<T>* l = node->l;
			Node<T>* r = node->r;
			delete node;
			deleteNode(l);
			deleteNode(r);
		}
		void insert(T data) {
			if (root == NULL) {
				root = new Node<T>(data);

			}
			else if(root->data==data){
				root->dCount++;
			}
			else {
				Node<T>* curr;
				Node<T>* anc;
				curr = root;
				anc = root;
				while (true) {
					
                    if (curr->data > data) {
						anc = curr;
						curr = curr->l;
						if (curr == NULL) {
							curr = new Node<T>(data);
							anc->l = curr;
							return;
						}
						else if(curr->data==data){
							curr->dCount++;
							return;
						}
						//anc = curr;
						
					}
                    else if(curr->data < data) {
						anc = curr;
						curr = curr->r;
						if (curr == NULL) {
							curr = new Node<T>(data);
							anc->r = curr;
							return;
						}
						else if(curr->data==data){
							curr->dCount++;
							return;
						}
					}
					else {
						return;
					}
				}
				//curr = new Node<T>(data);
			}
		}
		
		//void isEqual()


        void display(void) {
            display(root);
        }

		void display(Node<T>* node) {
			//if(node != NULL)
			if (node == NULL) {
				return;
			}
			display(node->l);
			cout << node->data <<" "<< node->dCount<< endl;
			display(node->r);
		}
		
		void fileFun(){
			/*ifstream readFile("myfile.txt");
  			string gString = "";

  			if ( readFile.is_open() ){

    			while ( getline(readFile, gString) ){
     				insert(gString);
    			}		

    			readFile.close();
  			}*/
  			
  			// filestream variable file
    		fstream file;
   		 	string word, filename;
  
    		// filename of the file
    		filename = "myfile.txt";
  
    		// opening file
    		file.open(filename.c_str());
  
    		// extracting words from the file
    		while (file >> word)
    		{
        		insert(word);
    		}
		}
		
};
