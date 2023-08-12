/*
 * 	Subtraction of pointers
 *
 */

	#include<stdio.h>

	void main() {
	
		char carr[] = {'A','B','C','D'};

		char *cptr1 = &carr[0];
		char *cptr2 = &carr[3];
		
		printf("%p\n",cptr2);
		printf("%p\n",cptr2-2);
	}
