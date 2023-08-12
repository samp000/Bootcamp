
	#include<stdio.h>

	void main() {
	
		FILE *fp = fopen("file.txt","r");	//return NULL if file is not there

		printf("%p\n",fp);
	}
