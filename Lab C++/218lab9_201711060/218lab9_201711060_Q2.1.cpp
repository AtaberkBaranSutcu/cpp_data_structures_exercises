#include <iostream>
using namespace std;

int is_all_odd(int* arr, int n_elements){
	int i=0, a=1, count=0;

	while( i < n_elements && a == 1){
		a=arr[i]%2;
		count+=a;
		i++;
	}
	
	return count/i;
}

int main(){
	
	int arr[4] = { 3, 5, 1, 2 };
	
	cout<<is_all_odd(arr,4);
	
	return 0;
}
