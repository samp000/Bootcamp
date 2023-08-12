
	//recursion in an array

	#include<stdio.h>
	
	int sumArr(int *arr, int n) {
	
		if(n == 1)
			return *(arr+0);

		return sumArr(arr,n-1) + *(arr+n-1);
	}
	

	void main() {
	
		int arr[] = {10,20,30,40,50}; 
		printf("Sum of array:%d\n",sumArr(arr,sizeof(arr)/sizeof(arr[0])));
	}
