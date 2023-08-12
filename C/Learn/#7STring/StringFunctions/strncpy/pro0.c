
	#include<stdio.h>

	char * mystrncpy(char *dest,char *src,int n) {
	
		while(n!=0 && *src!='\0') {
		
			*dest = *src;
			dest++;
			src++;
			n--;
		}
		*dest='\0';

		return dest;
	}

	void main() {
	
		char str1[20]="Sandesh Marathe";
		char str2[20];

		puts(str1);
		puts(str2);

		mystrncpy(str2,str1,7);
		
		puts(str1);
		puts(str2);

	}
