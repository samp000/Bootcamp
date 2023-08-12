
	#include<stdio.h>

	int sumArr(int *arr,int sz) {
	
		int sum=0;

		for(int i=0;i<sz;i++) {
		
			sum+=*(arr+i);
		}

		return sum;
	}
	

	void main() {
	
		int arr[] = {10,20,30,40,50};

		int sz = sizeof(arr)/sizeof(arr[0]);

		int sum = sumArr(arr,sz);	
		
		printf("Sum of array elements is:%d\n",sum);
	}
