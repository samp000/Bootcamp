
	#include<stdio.h>

	void factorial(int n) {
	
		static int fact = 1;

		fact = fact * n;

		if(n !=1 )
			factorial(--n);
		else
			printf("%d\n",fact);
					
	}

	void main() {
	
		factorial(5);
	}
