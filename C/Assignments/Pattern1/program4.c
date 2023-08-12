/*
 *	Program 4:
 *
 * 	A  B  C
 * 	D  E  F
 * 	G  H  I
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);
	
		char ch = 'A';

		for(int i=1;i<=rows;i++) {
		
			for(int j=1;j<=rows;j++) {
			
				printf("%c  ",ch++);
			}
			printf("\n");
		}

	}
