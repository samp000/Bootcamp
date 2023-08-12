
	#include<stdio.h>

	void main() {
	
		char pName[] = {'R','o','h','i','t','S','\0','4','5'};
		char *name = "ViratK";

		printf("%ld\n",sizeof(pName));
		printf("%ld\n",sizeof(name));

		puts(pName);
		puts(name);
	}
