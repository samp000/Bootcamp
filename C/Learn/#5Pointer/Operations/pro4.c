/*
 * 	Addiion of pointers
 *
 */

	#include<stdio.h>

	void main() {
	
		char ch1='x',ch2='y',ch3='z';

		char *ptr1=&ch1;

		printf("%p\n",ptr1);		
		printf("%c\n",*(ptr1));		
		
		printf("%p\n",ptr1+1);		
		printf("%c\n",*(ptr1+1));		
		
		printf("%p\n",ptr1+2);		
		printf("%c\n",*(ptr1+2));		
	}
