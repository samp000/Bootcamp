
	#include<stdio.h>

	char *mystruwr(char *str) {
	
		while(*str!='\0') {
		
			if(*str>=97 && *str<=122) {
			
				*str = *str-32;
			}
				
			str++;
		}

		return str;
	}	

	void main() {
	
		char str[] = "sanDY";

		puts(str);
		
		mystruwr(str);
		
		puts(str);
	}
