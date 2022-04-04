#include <iostream>
#include <stack>

using namespace std;

template<typename T>
void stack_transfer(stack<T>& s_0, stack<T>& s_1){
	stack<int> S;
	
	cout << "The top element of s_0 is: " << s_0.top() << endl;

    while (!s_0.empty()) {
        S.push(s_0.top());
        s_0.pop();
    }
    while (!S.empty()){
    	s_1.push(S.top());
    	S.pop();
	}
	
	cout << "The top element of s_1 is: " << s_1.top() << endl;
	
}

int main()
{
    stack<int> S0, S1;
	S0.push(1), S0.push(2), S0.push(3), S0.push(4), S0.push(5);
    stack_transfer(S0, S1);
    return 0;
}
