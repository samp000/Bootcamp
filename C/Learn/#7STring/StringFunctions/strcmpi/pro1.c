
	#include<stdio.h>

	int mystrlen(char *str) {
	
		int cnt=0;

		while(*str!='\0') {
		
			cnt++;
			str++;
		}

		return cnt;
	}

	int mystrcmpi(char * str1,char *str2) {
	
		while(*str1!='\0') {
		
			if(*str1==*str2 || *str1-*str2==32 || *str1-*str2==-32) {
			
				str1++;
				str2++;
			}else
				return *str1-*str2;
		}
		

	}

	void main() {
	
		char *str1 = "sandy";
		char *str2 = "SandY";

		int diff=1;

		if(mystrlen(str1) == mystrlen(str2))
			diff = mystrcmpi(str1,str2);


		printf("%d\n",diff);

		if(diff==0)
			printf("strings are equal\n");
		else
			printf("strings are not equal\n");
	}
