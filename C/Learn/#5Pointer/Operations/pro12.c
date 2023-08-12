/*
 * 	Subtraction of pointers
 *
 */

	#include<stdio.h>

	void main() {
	
		int carr[] = {0x7ACB,20,30};

		char *ptr1 = &carr[0];
		int *ptr2 = &carr[0];
	
		printf("%d\n",*(ptr1+1));
		printf("%d\n",*ptr2);
	}
