
	#include<stdio.h>
	#include<string.h>

	char* mystrlwr(char *str) {

		char *s=str;

		while(*str!='\0') {
		
			if(*str>=65 && *str<=90)
				*str = *str+32;

			str++;
		}	

		return s;
	}


	char* mystrupr(char *str) {

		char *s=str;

		while(*str!='\0') {
		
			if(*str>=97 && *str<=122)
				*str = *str-32;

			str++;
		}	

		return s;
	}

	void main() {
	
		char str[50];

		printf("Enter string:");
		gets(str);

		printf("Lowrcase string:%s\n",mystrlwr(str));
		printf("Uppercase string:%s\n",mystrupr(str));

	}
