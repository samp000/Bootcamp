
	#include<stdio.h>
	#include<string.h>

	void sortStr(char *str) {
	
		char *str1 = str;

		int len = strlen(str);

		for(int i=0;i<len;i++) {
			
			for(int j=0;j<len-1;j++) {
			
				if(str[j+1] < str[j]) {
				
					char tmp = str[j];
					str[j] = str[j+1];
					str[j+1] = tmp;
				}
			}
		}
			
	}

	void main() {
	
		char str1[50],str2[50];

		printf("Enter string1:");
		gets(str1);
		
		printf("Enter string2:");
		gets(str2);

		sortStr(str1);
		sortStr(str2);

		if(!strcmp(str1,str2))
			printf("These are anagram string\n");
		else
			printf("These are not anagram string\n");

	}
