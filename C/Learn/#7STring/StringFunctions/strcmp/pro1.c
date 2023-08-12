
	#include<stdio.h>
	#include<string.h>

	int mystrlen(char *str);
	int mystrcmp(char *str1,char *str2);

	void main() {
	
		char *str1 = "sandy";
		char *str2 = "Sandy";

		int diff=1;
		
		if(mystrlen(str1) == mystrlen(str2))
			diff = mystrcmp(str1,str2);

		
		if(diff==0) 
			printf("strings are equal\n");
		else
			printf("strings are not equal\n");

	}

	int mystrcmp(char *str1,char *str2) {

		while(*str1!='\0') {
		
			if(*str1 == *str2) {
			
				str1++;
				str2++;
			}else {
			
				return *str1-*str2;
			}

		
		}

		return 0;

	}

	int mystrlen(char *str) {
	
		int cnt=0;

		while(*str!='\0') {
		
			cnt++;
			str++;
		}

		return cnt;
	}
