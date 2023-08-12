/*
 * 	Addiion of pointers
 *
 */

	#include<stdio.h>

	void main() {
	
		char ch1='x',ch2='y';

		char *ptr1=&ch1;

		printf("%p\n",(ptr1+'A'));		
		printf("%c\n",*(ptr1+'A'));		//some garbage value or segmentaion fault		
		
	}
