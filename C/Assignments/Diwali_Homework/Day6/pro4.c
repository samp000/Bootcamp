

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

	char * mystrrev(char *str) {
	
		int sptr = 0;
		int eptr = mystrlen(str)-1;

		while(sptr < eptr) {
				
			char tmp = str[sptr];
			str[sptr] = str[eptr];
			str[eptr] = tmp;
				
			sptr++;
			eptr--;
		}

		printf("Reversed string is: ");
		puts(str);

		return str;
	}

	int mystrcmp(char *str1,char *str2) {
	

		while(*str1 != '\0' ) {
					
			if(*str1 == *str2) {
		
				str1++;
				str2++;

			}else {
				
				return *str1-*str2;
			
			}

		}

		return 0;

	} 

	void main() {
	
		char str1[25],str2[25];

		printf("Enter string:");
		gets(str1);

		strcpy(str2,str1);

		printf("String is:");
		puts(str1);

		if(mystrcmp(str2,mystrrev(str1)) != 0)
			printf("normal and reversed strings are not equal\n");
		else
			printf("normal and reversed strings are equal\n");

	}
	
