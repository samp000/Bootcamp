
	#include<stdio.h>

	char* strrev( char *str) {
	
		char *tmp=str;

		while(*str!='\0') { 
			str++;
		}

		str--;
	


		while(tmp < str) {


			char x = *tmp;

			*tmp = *str;
			*str = x;
			
			tmp++;
			str--;
		}

		return str;

	}

	void main() {
	
		char str[20];
		
		gets(str);
		puts(str);
		strrev(str);
		puts(str);
	}


