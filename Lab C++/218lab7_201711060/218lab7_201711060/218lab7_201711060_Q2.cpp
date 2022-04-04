#include <iostream>
using namespace std;
int function(int x);
int main(){
	
	cout<<function(532);
	
	return 0;
}

int function(int x){
	
	if (x == 0)
    	return 0;
    	
    return 1 + function(x / 10);
}
