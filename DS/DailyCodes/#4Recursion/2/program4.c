
	#include<stdio.h>
		
	int fact(int n) {
	
		if(n==1)
			return 1;
	
		return fact(n-1) * n;

	}

	void main() {
	
		printf("%d\n",fact(5));
	}
