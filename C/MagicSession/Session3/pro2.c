
	#include<stdio.h>
	
	void main() {
	
		int x=45,y=35;
		int *ptr1=&x,*ptr2=&y;

		printf("%p\n",ptr1);
		printf("%p\n",ptr2);

		int temp = *ptr1 + *ptr2+2;

		printf("%d\n",temp);
	}
