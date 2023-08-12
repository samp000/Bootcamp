/*
 * 	Subtraction of pointers
 *
 */

	#include<stdio.h>

	void main() {
	
		char ch1='A',ch2='B',ch3='C';

		char *cptr = &ch1;

		printf("%p\n",cptr);
		printf("%c\n",*cptr);
		
		printf("%p\n",cptr+1);
		printf("%c\n",*cptr+1);
		
		printf("%p\n",cptr+2);
		printf("%c\n",*cptr+2);
	}
