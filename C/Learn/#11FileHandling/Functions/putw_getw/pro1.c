
	#include<stdio.h>

	void main() {
	
		FILE *fp = fopen("abc.txt","w");
		printf("%d\n",getw(fp));
	}
