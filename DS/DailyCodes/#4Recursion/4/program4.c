
	//finding is array is sorted

	#include<stdio.h>
	#include<stdbool.h>

	bool isSorted(int *arr , int n) {

		if(n == 1)
			return true;

		if(*(arr+n-1) < *(arr+n-2))
			return false;

		return isSorted(arr,n-1) || false ;
	}

	void main() {

		int arr[] = {1,2,3,10,4,5};

		if(isSorted(arr,sizeof(arr)/sizeof(arr[0])))
				printf("Array is sorted\n");
		else
				printf("Array is not sorted\n");
	}
