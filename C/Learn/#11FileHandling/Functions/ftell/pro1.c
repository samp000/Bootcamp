
	#include<stdio.h>

	void main() {
	
		FILE *fp = fopen("file2.txt","w");

		printf("file offset pos:%ld\n",ftell(fp));
			
		fprintf(fp,"This is file");
		
		printf("file offset pos:%ld\n",ftell(fp));
		
		fprintf(fp,"This file is written again");		//this string is appended at end of file cause its already opened it'll not overried file
		
		printf("file offset pos:%ld\n",ftell(fp));
	
		rewind(fp);						//file offset set at 0
		
		fprintf(fp,"3rd time writting");	//writing will start at offset 0
	}
