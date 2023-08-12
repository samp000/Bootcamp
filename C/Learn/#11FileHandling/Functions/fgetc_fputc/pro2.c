
	#include<stdio.h>

	void main() {

		FILE *fp1 = fopen("success.txt","r");
		FILE *fp2 = fopen("done.txt","w");

		char ch;

		while((ch=fgetc(fp1)) != EOF) {
		
			fputc(ch,fp2);
		}
	}
