

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

	int mystrcmpi(char *str1,char *str2) {
	

		while(*str1 != '\0' ) {
					
			if(*str1 == *str2 || *str1-*str2 == 32 || *str1-*str2 == -32) {
		
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

		int flg=0;

		printf("Enter string1:");
		gets(str1);
		
		printf("Enter string2:");
		gets(str2);

	
		if(mystrlen(str1) != mystrlen(str2))
			flg=1;
		else
			flg=mystrcmpi(str1,str2); 

		if(flg==0)
			printf("%s and %s are equal\n",str1,str2);
		else
			printf("%s and %s are not equal\n",str1,str2);
	}
	
