
	#include<stdio.h>

	void main() {
	
		char arr[10];
		printf("ENter name:");
		
		gets(arr);
		puts(arr);

		char *str = arr;
		puts(str);

	}
