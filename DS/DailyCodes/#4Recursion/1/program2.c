
	#include<stdio.h>

	void fun() {

		static int x = 0;

		printf("%d\n",x);
		++x;
		fun();
	}

	void main() {
	
		fun();
	}
