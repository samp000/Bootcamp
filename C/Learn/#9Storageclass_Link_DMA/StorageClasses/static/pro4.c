
	#include<stdio.h>

	static int y=10;		//this is global static variable		

	void fun() {
	
		++y;
		printf("%d\n",y);
	}

	void main() {
	
		fun();		//11
		fun();		//12
		fun();		//13
				
		printf("%d\n",y);		//13

	}
