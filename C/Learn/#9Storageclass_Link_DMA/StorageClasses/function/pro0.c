
	#include<stdio.h>
	
	//we cant use storage classes with parameters

	void fun(int x,static int y) {		//error
	
		int a;
		register int b=30;
		static int c=40;
		extern int d;
	}

	void main() {
	
		fun(30,40);
	}
