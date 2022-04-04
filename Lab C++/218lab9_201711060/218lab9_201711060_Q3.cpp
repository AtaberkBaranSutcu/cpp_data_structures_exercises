#include <iostream>
using namespace std;

int f(int* arr, int n_elements){
	int i=0, a=1, count=0;
	double x = n_elements;
	while( i < n_elements ){ 
		a=arr[i]%2;
		count+=a;
		i++;
	}
	
	return count/(x/2);
}

int main(){
	
	int arr[6] = { 2, 4, 7, 1, 3 , 5};
	
	cout<<f(arr,6);
	
	return 0;
}
