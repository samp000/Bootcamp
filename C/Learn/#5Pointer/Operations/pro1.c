/*
 * 	Addiion of pointers
 *
 */

	#include<stdio.h>

	void main() {
	
		int x=10 ,y=20;

		int *ptr1=&x;
		int *ptr2=&y;

		printf("%d\n",*ptr1+*ptr2);		
		printf("%d\n",ptr1+ptr2);		//Addition of two pointers is obviously out of memory space of current process	
	}
