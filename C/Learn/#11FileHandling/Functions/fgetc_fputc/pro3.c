
	#include<stdio.h>

	void main() {

		FILE *fp1 = fopen("success.txt","r");
		FILE *fp2 = fopen("done.txt","w");

		char ch;

		int cnt=0;
		while((ch=fgetc(fp1)) != EOF) {
		
			if(cnt==10)
				break;
			
			fputc(ch,fp2);
			cnt++;
		}
	}
