
	#include<stdio.h>

	void main() {
	
		int x = 10;
		int *ptr1 = &x;

		void *ptr2 = &x;			//we can store address of any variable of any datatype in void pointer
	
		printf("%d",*ptr2);
		printf("%d",*(int*)ptr2);
	}
