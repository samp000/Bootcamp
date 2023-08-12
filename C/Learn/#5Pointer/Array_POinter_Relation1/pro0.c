
	#include<stdio.h>

	void main() {
	
		int arr[3][3] = {1,2,3,4,5,6,7,8,9};

		printf("%d\n",arr[0][2]);
		printf("%d\n",arr[1][0]);
		printf("%d\n",arr[2][1]);
		

		printf("%p\n",arr);		//addr of 2d array
		printf("%p\n",arr[0]);		//addr of first 1d array
		printf("%p\n",arr[1]);		//addr of 2nd 1d array
		printf("%p\n",arr[2]);		//addr of 3rd 1d array


		printf("%p\n",&arr[0][2]);	//addr of 2nd element in 3rd 1d array
		printf("%p\n",&arr[1][1]);	//addr of 1st element in 2nd 1d array
		printf("%p\n",&arr[2][0]);	//addr of 2nd element in 1st 1d array
	}
