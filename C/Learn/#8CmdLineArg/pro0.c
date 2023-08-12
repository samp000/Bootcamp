
	#include<stdio.h>

	/*
	 * 	passed 1st arg as to store no of cmd line arguments and 2nd for string(list) of arguments as array of character pointer
	 *
	 */

	void main(int argc,char *argv[]) {		
	

		printf("no of arguments paseed: %d\n",argc);

		for(int i=0;i<argc;i++) 
			puts(argv[i]);

	}
