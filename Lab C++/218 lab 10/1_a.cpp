#include <iostream>
#include <stack>

using namespace std;

template<typename T>
void stack_reverse_a(stack<T>& s){
	stack<int> S1, S2;
	
	cout << "The top element of S is: " << s.top() << endl;

    while (!s.empty()) {
        S1.push(s.top());
        s.pop();
    }
    while (!S1.empty()){
    	S2.push(S1.top());
    	S1.pop();
	}
         
    while (!S2.empty()) {
    	s.push(S2.top());
    	S2.pop();
	}
	
	cout << "The top element of S is now: " << s.top() << endl;
	
}

int main()
{
    stack<int> S;
	S.push(1), S.push(2), S.push(3),S.push(4), S.push(99);
    stack_reverse_a(S);
    return 0;
}
