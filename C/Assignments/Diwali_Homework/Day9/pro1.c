
	#include<stdio.h>
	#include<stdlib.h>

	void main() {
	
		char* cptr = (char*)malloc(sizeof(char));

		printf("%c\n",*cptr);
		*cptr = 'S';
		printf("%c\n",*cptr);
		*cptr = 'M';
		printf("%c\n",*cptr);
	}
