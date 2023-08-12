
	#include<stdio.h>
		
	int f =1;
	int fact(int n) {
	
		if(n==1)
			return f;
		
		f = f * n;

		return fact(--n) ;

	}

	void main() {
	
		printf("%d\n",fact(5));
	}
