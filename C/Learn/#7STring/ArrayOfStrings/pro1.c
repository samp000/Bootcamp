
	#include<stdio.h>

	void main() {
	
		char str1[][10] = {"sandesh","ayush","omkar"};
		

		printf("%p\n",str1[1]);			//every string has diffreent address
		printf("%p\n",&str1[1][1]);
		printf("%p\n",str1[2]);

	
		puts(str1[0]);
		puts(str1[1]);
		puts(str1[2]);
	}
