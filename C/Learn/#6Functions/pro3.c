
	#include<stdio.h>
	
	void fun(float x) {
	
		printf("%f\n",x);
	}

	void main() {
	
		fun('A');
		fun(10);
		fun(20.5f);
		fun(35.50);
	}

