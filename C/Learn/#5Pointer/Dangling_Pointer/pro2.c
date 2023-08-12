
	#include<stdio.h>
	#include<stdlib.h>

	void main() {
	
		int* ptr1 = (int*)malloc(sizeof(int));

		*ptr1 = 10;

		int* ptr2 = ptr1;

		printf("%d\n%d\n",*ptr1,*ptr2);
		printf("%p\n%p\n",ptr1,ptr2);

		//free(ptr1);
		
		int *ptr3 = (int*)realloc(ptr1,0);
		
		free(ptr1);
		
		printf("%d\n%d\n",*ptr1,*ptr2);
		printf("%p\n%p\n",ptr1,ptr2);
		

	}
