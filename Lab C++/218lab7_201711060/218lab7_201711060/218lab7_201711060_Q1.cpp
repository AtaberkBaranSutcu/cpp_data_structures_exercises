#include <iostream>
using namespace std;
int function(int x);
int main(){
	
	cout<<function(100);
	
	return 0;
}

int function(int x){
	
	int count = 0;
	
	while( x > 0){
		x/=10;
		count++;
	}
	
	return count;
}
