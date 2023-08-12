
	#include<stdio.h>

	void fun(int (*arr)[4]) {
	
		printf("%p\n",arr);
	}

	void main() {
	
		int arr[] = {10,20,30,40};
		
		fun(&arr);
	}
