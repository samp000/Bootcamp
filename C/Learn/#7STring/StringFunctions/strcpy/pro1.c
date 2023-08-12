
	#include<stdio.h>

	char* mystrcpy(char *dest,const char *src) {
	
		while(*src != '\0') {
		
			*dest++ = *src++;
		}

		*dest = '\0';
			
		return dest;
	}

	void main() {
	
		char *str1 = "Hardik Pandya";
		char str2[20];

		puts(str1);
		puts(str2);

		mystrcpy(str2,str1);		//strcpy(destination,source);
						
		puts(str1);
		puts(str2);
	}
