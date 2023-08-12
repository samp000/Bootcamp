
	#include<stdio.h>

	void main() {
	
		int arr1[] = {10,20,30};
		int arr2[] = {100,200,300};

		int (*ptr)[3] = &arr1;

		printf("%p\n",ptr);
	
		int (*ptr1[])[3] = {&arr1,&arr2};
	}
