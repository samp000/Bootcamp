
	
	#include<stdio.h>

	void printArr(int *parr,int sz) {

		int sum=0;
			
		for(int i=0;i<sz;i++) {
		
			printf("%d ",*(parr+i));
			sum+=*(parr+i);
		}

		printf("\nSum of arrayelements:%d\n",sum);
	}

	void main() {
	
		int arr[3][3] = {1,2,3,4,5,6,7,8,9};

		int sz = sizeof(arr)/sizeof(arr[0][0]);

		printArr(&arr[0][0],sz);

		printf("\n");
	}
