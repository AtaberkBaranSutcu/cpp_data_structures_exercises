#include <iostream>
#include <queue>
#include <stack>
using namespace std;

template<typename T>
void stack_reverse_b(stack<T>& s){
	queue<int> Q;
	
	cout << "The top element of S is: " << s.top() << endl;

    while (!s.empty()) {
        Q.push(s.top());
        s.pop();
    }
    while (!Q.empty()) {
        s.push(Q.front());
        Q.pop();
    }
  
	cout << "The top element of S is now: " << s.top() << endl;
	
}

int main()
{
    stack<int> S;
	S.push(1), S.push(2), S.push(3),S.push(4), S.push(5);
    stack_reverse_b(S);
    return 0;
}
