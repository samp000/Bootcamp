/*
 *
 * 	c
 * 	b  b
 * 	a  a  a
 */

	
	#include<stdio.h>

	
	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);


		for(int i=1;i<=rows;i++) {
		
			char ch = 'a'+rows-i;
		
			for(int j=1;j<=i;j++) {
			
				printf("%c  ",ch);
			}

			printf("\n");
		}
	}
