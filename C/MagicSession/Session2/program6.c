
	#include<stdio.h>

	void main() {
	
		int x=10,y=20;

		int *ptr1=&x,*ptr2=&y;

		printf("Before swapping:\n");
		printf("x:%d\ny:%d\n",x,y);

		*ptr1 = *ptr1 ^ *ptr2;
		*ptr2 = *ptr1 ^ *ptr2;
		*ptr1 = *ptr1 ^ *ptr2;

		printf("After swapping:\n");
		printf("x:%d\ny:%d\n",x,y);

	}
