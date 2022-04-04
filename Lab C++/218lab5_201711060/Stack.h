#include "LinkedList.h"
using namespace std;
template<typename T>
class Stack{
	
	private:
		LinkedList<T> List;
	
	public:
		
		Stack(){	
		}		 	
		
		bool isEmpty(){
			return List.isEmpty();	
		}
		
		bool isFull(int size){
			if(List.size() == size)
				return true;
			else if(List.size() > size)
				return false;
		}	
		
		void push(T item){
			List.addBack(item);	
		}
		
		T top(){
			if(!List.isEmpty())
				return List.returnTop();
		}
		
		void pop(){
			if(!List.isEmpty())
				List.listPop();
		}	
		
		void display(){
			List.print();
		}		
};
