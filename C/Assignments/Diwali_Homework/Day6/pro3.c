

	#include<stdio.h>
	#include<string.h>

	char* mystrcpy(char* dest,char* src) {
	
		while(*src!='\0') {
		
			*dest++ = *src++;

		}

		return dest;
	}

	char * mystrcat(char *res,char *str) {
	
		while(*res!='\0') 
			res++;

		while(*str!='\0') 
			*res++ = *str++;

		*res='\0';

		return res;
	}
	

	void main() {
	
		char str1[25],str2[25]="Marathe";

		printf("Enter string:");
		gets(str1);

		puts(str1);
		puts(str2);

		mystrcpy(str2,str1);

		printf("After strcpy:\n");
		puts(str1);
		puts(str2);
		
		char str3[25] = "Marathe";


		mystrcat(str1,str3);

		printf("After strcat:\n");
		puts(str1);
		puts(str2);
	}
	
