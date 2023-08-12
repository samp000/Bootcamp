
	#include<stdio.h>

	void* malloc(size_t);
	

	void fun() {
	
		int x = 10;

		// there is no any name given to variables on heap we can access them by their address
		int *ptr = (int*)malloc(sizeof(int));		//this creates box in heam and return its address
		*ptr = 20;

		printf("%d\n",*ptr);
	}

	void main() {
	
		fun();

	}
