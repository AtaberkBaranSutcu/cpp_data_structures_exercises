#include <iostream>
using namespace std;

bool hasDecreasingOddDigits(int number);

int main()
{
	int Key = 1234;
	
    if(Key>0)
		cout<<hasDecreasingOddDigits(Key);
    
    return 0;
}

bool hasDecreasingOddDigits(int number)
{
    int left, right;
  
    int tmp=1;

	if(number==0)
    	return tmp;
	
    else if(tmp==1)
    {
        right=number%10;
      
        number=number/100;
        
        left=number%10;
        
        if(left<right)
            return hasDecreasingOddDigits(number);
        
    	else
        {
            tmp=0;
            return 0;
        }
    }
}

