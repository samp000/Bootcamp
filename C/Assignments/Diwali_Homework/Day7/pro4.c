
	#include<stdio.h>
	#include<string.h>

	void main() {
	
		char *str1 = "Sandesh ";
		char *str2 = "Dattatray ";
		char *str3 = "Marathe ";

		char* sarr[] = {str1,str2,str3};

		for(int i=0;i<3;i++)
			puts(sarr[i]);
	}
