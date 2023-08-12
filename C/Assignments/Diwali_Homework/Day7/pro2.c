
	#include<stdio.h>
	#include<string.h>

	void main(int argc,char *argv[]) {
	
		printf("Number of cmd line arguments:%d\n",argc);

		printf("Passed arguments are:\n");
		
		for(int i=0;i<argc;i++)
			puts(argv[i]);
	}

	//pass arguments while running
