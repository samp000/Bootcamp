
	#include<stdio.h>

	void main() {
	
		FILE *fp = fopen("success.txt","a");
		
		char buff[20] = "Buy GTR"; 
		fputs(buff,fp);				//prints buff in success.txt
	}
