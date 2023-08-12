
	#include<stdio.h>

	void* calloc(long unsigned int,size_t);
	void* realloc(void*,long unsigned int);

	void main() {
			
		int *ptr = (int*)calloc(5,sizeof(int));

		for(int i=0;i<5;i++)
			*(ptr+i) = 10+i;
		
		for(int i=0;i<5;i++) {
			printf("%d ",*(ptr+i));
			printf("%p ",(ptr+i));	
		}
		
		printf("\n");

		/*
		 * 	realloc() mainly used for reallocating block of memory we can use it for expand and contract memory
		 *
		 */

		int *ptr1 = (int*)realloc(ptr,8);
		
		for(int i=0;i<8;i++) {
			printf("%d ",*(ptr1+i));
			printf("%p ",(ptr1+i));	
		}

		printf("\n");
	}

	
