
	#include<stdio.h>

	void main() {
	
		printf("start main\n");
		
		char ch1='A';
		char ch2 = '48';		//this line considers only ch2 = '8';


		if(ch1) {
		
			printf("In first block\n");
		}
		if(ch2) {
		
			printf("In second if block\n");
		}

		printf("End main\n");
	}
