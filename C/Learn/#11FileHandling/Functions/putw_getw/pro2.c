
	#include<stdio.h>

	void main() {
	
		FILE *fp = fopen("abc.txt","w+");

		int num1=10,num2=20;

		printf("%ld\n",ftell(fp));

		putw(num1,fp);
		putw(num2,fp);

		printf("%ld\n",ftell(fp));

		rewind(fp);
		printf("%ld\n",ftell(fp));

		printf("%d\n",getw(fp));
		printf("%d\n",getw(fp));
	}

	/*
	 * for file operations mode matters a lot 
	 *
	 * 	if writing first and then reading use w+
	 * 	if reading first and then writing use r+
	 *
	 */
