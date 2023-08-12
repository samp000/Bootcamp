
	#include<stdio.h>

	void mult(int a,int b) {
	
		printf("Multiplication of %d and %d is %d\n",a,b,a*b);
	}

	void main() {
	
		void (*mptr) (int,int);

		mptr = mult;

		mptr(5,2);
		mptr(5,5);
		mptr(10,20);
	}
