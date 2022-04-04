#include <iostream>
using namespace std;

int function(int number);

int main()
{
	int Key = 22;
	
	cout<<function(Key);
    
    return 0;
}

int function(int number)
{
    int x;
    if(number > 0){
    	x = number % 2;
    	number = number / 2;
    	if(number == 0)
    		return 1;
    	else if(number > 0)
    		return x + function(number);
	}  	
}

