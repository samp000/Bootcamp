
	#include<stdio.h>

	void main() {
	
		FILE *fp = fopen("a.txt","a");

		char buff[100];

		printf("Enter data:\n");
		fgets(buff,100,stdin);

		fputs(buff,fp);



	}
