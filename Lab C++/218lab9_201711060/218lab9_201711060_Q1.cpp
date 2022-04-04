#include <iostream>
using namespace std;

int odd_count(int* arr, int n_elements){
	int i=0, a=0, count=0;

	while( i < n_elements){
		a=arr[i]%2;
		count+=a;
		i++;
	}
	
	return count;
}

int main(){
	
	int arr[4] = { 1, 4, 0, 9 };
	
	cout<<odd_count(arr,4);
	
	return 0;
}
