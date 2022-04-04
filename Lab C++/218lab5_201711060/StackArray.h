using namespace std;
#define MAX 5
template <class T> 
class StackArray { 
	
	private: 
		T Stack[MAX]; 
		int top;
	public: 
		StackArray(){
			top = -1;	
		}
		
		void push(T item){	
			Stack[++top] = item;
		}
	
		bool isEmpty(){
			if(top == -1)
				return true;
			else
				return false;
		}
		
		bool isFull(){
			if(top == MAX - 1)
				return true;
			else if(top < MAX - 1)
				return false;	
		}
		
		T returnTop(){
			if(!isEmpty())
				return Stack[top];	
		}
		
		void pop(){
			if(!isEmpty())
				top--;		
		}
		
		void print(){	
			for(int i = 0; i <= top ;){
				cout<<Stack[i++]<<" ";
			}
		}
		
};
