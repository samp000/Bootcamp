
	#include<stdio.h>

	void* calloc(long unsigned int,size_t);

	void main() {
	
		/*
		 * 	calloc() gives us sequential memory
		 *
		 */
		
		int *ptr = (int*)calloc(5,sizeof(int));

		for(int i=0;i<5;i++)
			*(ptr+i) = 10+i;
		
		for(int i=0;i<5;i++)
			printf("%d ",*(ptr+i));

		printf("\n");
	}

	
