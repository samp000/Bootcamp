
	#include<stdio.h>

	void main() {
	
		char *str1[3] = {"sandesh","ayush","sandesh"};
		

		/*
		 * 	above string are stored in ROData so same strings have same address in our case that strings are 0th and 2nd
		 *
		 * */

		printf("%p\n",str1[0]);			
		printf("%p\n",str1[1]);
		printf("%p\n",str1[2]);

		int x=10;	
		printf("%p\n",&x);			
		
		//above var x will help to understand to know below adresses are in main stack frame

		//these are addresses of pointers to string in main stack frame;
		printf("%p\n",&str1[0]);			
		printf("%p\n",&str1[1]);
		printf("%p\n",&str1[2]);

	
		puts(str1[0]);
		puts(str1[1]);
		puts(str1[2]);
	}
