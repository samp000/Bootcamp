
	//r+ mode

	#include<stdio.h>

	void main() {

		FILE *fp = fopen("file1.txt","r+");

		fprintf(fp,"This is second time writing");		//same as printf();



	}
