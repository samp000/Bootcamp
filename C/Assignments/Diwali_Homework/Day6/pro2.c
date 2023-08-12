

	#include<stdio.h>
	#include<string.h>

	int mystrlen(char *str) {
	
		int len=0;

		while(*str!='\0') {
		
			len++;
			str++;
		}

		return len;
	} 

	void main() {
	
		char str[25];

		printf("Enter string:");
		gets(str);

		printf("String is:");
		puts(str);
		printf("Length of string is:%ld\n",strlen(str));
		printf("Length of string is:%d\n",mystrlen(str));
	}
	
