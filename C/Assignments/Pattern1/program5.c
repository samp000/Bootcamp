/*
 *	Program 5:
 *
 *	A  B  C  D
 *	B  C  D  E
 *	C  D  E  F
 *	D  E  F  G
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);


		for(int i=65;i<65+rows;i++) {
		
			char ch = i;

			for(int j=1;j<=rows;j++) {
			
				printf("%c  ",ch++);
			}
			printf("\n");
		}

	}
