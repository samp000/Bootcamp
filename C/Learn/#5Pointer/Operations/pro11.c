/*
 * 	Subtraction of pointers
 *
 */

	#include<stdio.h>

	void main() {
	
		int carr[] = {10,20,30,40};

		int *ptr1 = &carr[0];
		int *ptr2 = &carr[1];
		
		int x = ptr1 - ptr2;

		printf("%d\n",x);

		printf("%p\n",ptr1*ptr2);
		printf("%p\n",ptr1/ptr2);
		printf("%p\n",ptr1 *2);
	}
