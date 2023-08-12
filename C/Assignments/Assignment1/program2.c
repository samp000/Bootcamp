/*
 * 	Program 2: WAP to print a character whose ASCII value is even
 *
 */

	#include<stdio.h>

	void main() {
	

		for(int i=0;i<=127;i++) {		
		
			if(i%2==0) {
				
				printf("%d:%c\t",i,i);
			}	
		}

		printf("\n");
	}
