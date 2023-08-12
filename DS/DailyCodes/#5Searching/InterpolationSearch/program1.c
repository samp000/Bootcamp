
	#include<stdio.h>

	int interpolationSearch(int *arr ,int size,int key) {
	
		int start = 0,end = size-1 ;

		return (start + ((key - arr[start]) * (end-start)) / (arr[end] - arr[start])) ;
	}

	void main() {
	
		int arr[] = {5,7,9,11};
		int size = sizeof(arr)/sizeof(arr[0]);

		printf("%d\n",interpolationSearch(arr,size,11));
	}
