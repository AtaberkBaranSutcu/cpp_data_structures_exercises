#include "LinkedList.h"
using namespace std;
template<typename T>
class Queue{
	
	private:
		LinkedList<T> List;
	
	public:
		
		Queue(){	
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
		
		void enqueue(T item){
			List.addBack(item);	
		}
		
		T itemAtFront(){
			if(!List.isEmpty())
				return List.returnFront();
		}
		
		void dequeue(){
			if(!List.isEmpty())
				List.listDequeue();
		}	
		
		void printQueue(){
			List.print();
		}		
};
