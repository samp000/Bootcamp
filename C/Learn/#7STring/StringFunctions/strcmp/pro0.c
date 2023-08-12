
	#include<stdio.h>
	#include<string.h>

	void main() {
	
		char *str1 = "sandy";
		char *str2 = "Sandy";

		int diff = strcmp(str1,str2);

		printf("%d\n",diff);

		if(diff==0) 
			printf("strings are equal\n");
		else
			printf("strings are not equal\n");

	}
