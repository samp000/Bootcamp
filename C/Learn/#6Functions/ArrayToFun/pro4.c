
	
	#include<stdio.h>

	int arrSum(int (*parr)[3][3],int sz) {
	
		int sum=0;

		for(int i=0;i<sz;i++) {
		
			sum = sum + *(**parr+i);
			printf("%d ",*(**parr+i));
		}

		printf("\n");

		return sum;
	}

	void main() {
	
		int arr[2][3][3] = {1,2,3,4,5,6,7,8,9,11,12,13,14,15,16,17,18,19};

		int sz = sizeof(arr)/sizeof(arr[0][0][0]);

		int sum = arrSum(arr,sz);

		printf("Sum of array is %d\n",sum);
	
	}
