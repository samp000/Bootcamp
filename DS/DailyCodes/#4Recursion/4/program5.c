
	//is both strings are equal

	#include<stdio.h>
	#include<stdbool.h>
	#include<string.h>

	bool strCmp(char *str1 , char *str2 , int n) {
	
		if(n == 0)
			return true;

		if(*(str1+n-1) != *(str2+n-1))
			return false;

		return strCmp(str1,str2,n-1);
	}	

	void main() {

		bool ret = false;

		char *str1 = "sandyM";
		char *str2 = "sandy";
	
		if(strlen(str1) == strlen(str2))
			ret = strCmp(str1,str2,strlen(str1));

		if(ret)
			printf("Both strings are equal\n");
		else
			printf("Both strings are not equal\n");

	}
