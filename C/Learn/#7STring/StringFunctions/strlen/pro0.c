
	#include<stdio.h>
	#include<string.h>
	
	void main() {
	
		char name[10] = {'K','L','R','a','h','u','l','\0'};
		char *str = "Virat Kohli";

		int lenName = strlen(name);
		int lenStr = strlen(str);

		printf("%d\n",lenName);
		printf("%d\n",lenStr);
	}
