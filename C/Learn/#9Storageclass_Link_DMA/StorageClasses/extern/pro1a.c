
	#include<stdio.h>
	
	
	void fun() {

		extern int x;

		printf("%d\n",x);
	}
	
//	static int x=10;		we cant make static to extern variable 
