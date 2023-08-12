
	#include<stdio.h>

	void main() {
	
		FILE *fp = fopen("success.txt","r");

		//fseek(fp,10,0);			//read pointer goes to 10 position
		//fseek(fp,5,1);			//read pointer goes to 5th position from current pointer 
		fseek(fp,-13,2);			//read pointer goes to -10th position from end as end is -1 then -2 ,-3 and so on

		char ch;

		while((ch=fgetc(fp)) != EOF) {
			printf("%c",ch);

		}
	

	}
