
	#include<stdio.h>

		
	int y=10;		//global variable
	

	void fun() {
		++y;
		printf("%d\n",y);
	}

	void main() {
	
		fun();
		fun();
		fun();

	}
