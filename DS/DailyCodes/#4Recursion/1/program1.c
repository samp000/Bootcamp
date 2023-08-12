
	#include<stdio.h>

	void fun(int n) {
	
		printf("%d\n",n);
		fun(--n);
	}

	void main() {
	
		fun(5);
	}
