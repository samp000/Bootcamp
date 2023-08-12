
	#include<stdio.h>
	#include<stdlib.h>

	void main() {
	
		char* cptr = (char*)calloc(5,sizeof(char));		//allocated 5 consecutive memory for char

		for(int i=0;i<5;i++) 
			*(cptr+i) = 65+i;

		printf("Entered array is: ");
		for(int i=0;i<5;i++)
			printf("%c ",*(cptr+i));

		char* cptr1 = (char*)realloc(cptr,10);			//reallocating memory
		
		for(int i=0;i<10;i++) 
			*(cptr+i) = 65+i;
		
		printf("\nEntered array is: ");
		for(int i=0;i<10;i++)
			printf("%c ",*(cptr+i));

		printf("\n");
	}
