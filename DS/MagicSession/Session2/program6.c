
	#include<stdio.h>

	int findPeek(int arr[] , int size) {
	
		for(int i=1;i<size-2;i++) {
		
			if(arr[i] >= arr[i-1] && arr[i] > arr[i+1])
				return arr[i];
		}

		if(arr[0] > arr[1] && arr[0] > arr[size-1])
			return arr[0];

		return arr[size-1];
	}

	void main() {
	
		int arr[] = {10,2,100,101,5,200,6};
		int size = sizeof(arr) / sizeof(arr[0]);

		printf("floor:%d\n",findPeek(arr,size));
	}
