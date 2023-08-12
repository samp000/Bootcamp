
	
	#include<stdio.h>

	void main() {
	
		int arr[3][3] = {1,2,3,4,5,6,7,8,9};

		int sz = sizeof(arr)/sizeof(arr[0][0]);

		for(int i=0;i<sz;i++) {
		
			printf("%d ",*(*arr+i));
		}

		printf("\n");
	}
