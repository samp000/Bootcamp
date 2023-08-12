/*
 * 	Addiion of pointers
 *
 */

	#include<stdio.h>

	void main() {
	
		int x=10,y=20;

		int *ptr1=&x;

		printf("%d\n",*ptr1);		//10		
		printf("%d\n",*(ptr1+1));	//20	
	}
