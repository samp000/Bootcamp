
	#include<stdio.h>

	void main() {
	
		int a=30;
		float b = 30.0;
		char c = 'c';

		void *ptr1 = &a;
		void *ptr2 = &b;
		void *ptr3 = &c;

		printf("%d\n",*((int*)ptr1));
		printf("%f\n",*((float*)ptr2));
		printf("%c\n",*((char*)ptr3));
	}
