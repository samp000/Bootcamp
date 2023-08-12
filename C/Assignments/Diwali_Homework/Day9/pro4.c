
	#include<stdio.h>
	#include<stdlib.h>

	void main() {
	
		char* cptr = (char*)malloc(sizeof(char));

		printf("%c\n",*cptr);
		*cptr = 'S';
		printf("%c\n",*cptr);
		*cptr = 'M';
		printf("%c\n",*cptr);
		
		free(cptr);		//freeing memory on heap
					
		//char *cptr1 = (char*)realloc(cptr,0);	//this also free but using free twice on same memory gives error
	}
