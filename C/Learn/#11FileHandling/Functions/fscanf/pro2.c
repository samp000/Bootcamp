
	#include<stdio.h>

	void main() {
	
		char ch[50];

		fscanf(stdin,"%[^\n]",ch);	//this is same as scanf()
		printf("%s\n",ch);

	}
