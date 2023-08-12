
	#include<stdio.h>
	#include<stdlib.h>

	void main() {
	
		char* cptr = (char*)calloc(sizeof(char),5);		//allocated 5 consecutive memory for char

		for(int i=0;i<5;i++) 
			*(cptr+i) = 65+i;

		printf("Entered array is: ");
		
		for(int i=0;i<5;i++)
			printf("%c ",*(cptr+i));

		printf("\n");
	}
