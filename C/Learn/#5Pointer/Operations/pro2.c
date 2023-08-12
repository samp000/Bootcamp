/*
 * 	Addiion of pointers
 *
 */

	#include<stdio.h>

	void main() {
	
		char x='A',y='B';
		
		char *ptr1=&x;
		char *ptr2=&y;

		printf("%d\n",*ptr1+*ptr2);		
		printf("%d\n",ptr1+ptr2);		//Addition of two pointers is obviously out of memory space of current process	
	}
