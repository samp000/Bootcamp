
	#include<stdio.h>

	void printArr1(int *arr,int sz) {
	
		for(int i=0;i<sz;i++) {
		
			printf("%d ",*(arr+i));
		}

		printf("\n");
	}
	
	void printArr2(int arr[],int sz) {
	
		for(int i=0;i<sz;i++) {
		
			printf("%d ",i[arr]);
		}
		
		printf("\n");
	}


	void main() {
	
		int arr[] = {10,20,30,40,50};

		int sz = sizeof(arr)/sizeof(arr[0]);

		printArr1(arr,sz);	
		printArr2(arr,sz);	
	}
