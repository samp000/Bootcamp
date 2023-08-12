
	#include<stdio.h>

	void swap(int a,int b) {
	
		printf("----------------------\n");
		printf("a:%d\n",a);
		printf("b:%d\n",b);

		a = a ^ b ;
		b = a ^ b ;
		a = a ^ b ;
		
		printf("a:%d\n",a);
		printf("b:%d\n",b);
		printf("----------------------\n");

	
	}

	void main() {
	
		int a=10,b=20;

		printf("Before swapping:\n");
		printf("a:%d\n",a);
		printf("b:%d\n",b);

		swap(a,b);

		printf("After swapping:\n");
		printf("a:%d\n",a);
		printf("b:%d\n",b);
	}
