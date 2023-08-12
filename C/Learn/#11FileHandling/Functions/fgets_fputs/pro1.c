
	#include<stdio.h>

	void main() {
	
		FILE *fp = fopen("success.txt","r");
		
		char buff[20];
		fgets(buff,12,fp);			//reads first 12 bytes into buff 
		puts(buff);				//prints buff
	}
