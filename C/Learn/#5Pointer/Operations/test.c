/*
 * 	Subtraction of pointers
 *
 */

	#include<stdio.h>

	void main() {
	
		char carr[] = {65,66,67,68};

		char *ptr1 = &carr[0];
		char *ptr2 = &carr[1];

		printf("%c\n",*ptr1);
		printf("%c\n",*ptr2);
	}
