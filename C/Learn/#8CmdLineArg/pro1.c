
	#include<stdio.h>


	void main(int argc,char *argv[]) {		
	

		printf("no of arguments passed: %d\n",argc);

		//cmd line arguments gets memory on main stack frame	
		for(int i=0;i<argc;i++) {
			
			puts(argv[i]);
			printf("%p\n",argv[i]);
		}

		char *str1 =  "sandy";
		char *str2 =  "sandy";

		printf("%s %p\n",str1,str1);		
		printf("%s %p\n",str2,str2);


		char str3[] = "sandy";
		char str4[] = "sandy";
		
		printf("%s %p\n",str3,str3);
		printf("%s %p\n",str4,str4);


		/*
		 * example:
		 *
		 * $./a.out sandy sandy sandy
		 *
		 * 	if we passed same string as above still we will get different addresses.
		 * 	if we are passing constant string still it gives different addresses because we are passing that strings as parameters
		 	
		 	think of string functions where we passes char* str to it
		 *
		 */

	}
