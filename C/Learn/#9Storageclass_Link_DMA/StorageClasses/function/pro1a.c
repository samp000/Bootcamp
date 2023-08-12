

	#include<stdio.h>

	void fun() {			//bydefault all functions are extern
	
		printf("In fun\n");
	}

	extern void gun() {		
		printf("In gun\n");
	}
