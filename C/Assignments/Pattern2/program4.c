/*
 *	Program 4:
 *
 * 	I  H  G
 * 	F  E  D
 * 	C  B  A
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);
	
		char ch = 'A'+rows*rows-1;

		for(int i=1;i<=rows;i++) {
		
			for(int j=1;j<=rows;j++) {
			
				printf("%c  ",ch--);
			}
			printf("\n");
		}

	}
