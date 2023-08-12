
	#include<stdio.h>

	void main() {
	
		FILE *fp = fopen("file1.txt","r");	

		char ch[50];

		fscanf(fp,"%s",ch);
		printf("%s\n",ch);

	}
