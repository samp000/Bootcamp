
	#include<stdio.h>

	void fun() {
	
		static int y=10;		//this is local static variable		
		++y;
		printf("%d\n",y);
	}

	void main() {
	
		fun();		//11
		fun();		//12
		fun();		//13
				
		printf("%d\n",y);		//we cannot access variable anywhere if its stil a static if declared inside any function

	}
