
	#include<stdio.h>

	void main() {

		FILE *fp = fopen("success.txt","r");

		printf("%c\n",fgetc(fp));
		printf("%c\n",fgetc(fp));

		fclose(fp);
		
		printf("%c\n",fgetc(fp));	//gives garbage value
		
	}
