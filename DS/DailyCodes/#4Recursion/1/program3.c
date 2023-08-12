
	#include<stdio.h>

	int x = 0;

	void fun() {

		printf("%d\n",x);
		++x;
		fun();
	}

	void main() {
	
		fun();
	}
