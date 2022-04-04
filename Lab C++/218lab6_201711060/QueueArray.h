#include <fstream>
using namespace std;
#define MAX 5
template <class T> 
class QueueArray { 
	
	private: 
		T Queue[MAX]; 
		int head;
		int end;
	public: 
		QueueArray(){
			head = -1;	
			end = -1;
		}
		
		void enqueue(T item){
			if (head == -1)
				head = 0;	
			Queue[++end] = item;
		}
	
		bool isEmpty(){
			if(end == -1)
				return true;
			else
				return false;
		}
		
		bool isFull(){
			if(end == MAX - 1)
				return true;
			else if(end < MAX - 1)
				return false;	
		}
		
		T itemAtFront(){
			if(!isEmpty())
				return Queue[head];	
		}
		
		void dequeue(){
			if(!isEmpty()){
				for(int i = 0; i < end; i++){
					Queue[i] = Queue[i+1];
				}
				end--;
			}		
		}
		
		void printQueue(){	
			for(int i = 0; i <= end;){
				cout<<Queue[i++]<<" ";
			}
			cout<<endl;
		}
		
		void fileFun(){
			ifstream readFile("QueueFile.txt");
  			char gChar;

  			if ( readFile.is_open() ){

    			while ( readFile.get(gChar) ){
     				enqueue(gChar);
    			}		

    			readFile.close();
  			}
		}
		
};
