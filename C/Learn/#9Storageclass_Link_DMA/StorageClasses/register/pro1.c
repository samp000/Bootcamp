
	#include<stdio.h>

	void main() {
	
		register int x = 10;		//this variable gets space in cpu register but we cant garentee that it will get memory on cpu

		int y=10;


		printf("%d\n",y);
		printf("%p\n",&y);

		printf("%d\n",x);		//10	
		//printf("%p\n",&x);		//we cant print address of variable with register storage class
	}
