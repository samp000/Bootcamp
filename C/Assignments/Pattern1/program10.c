/*
 *	Program 10:
 *
 * 	D4  C3  B2  A1
 * 	D4  C3  B2  A1
 * 	D4  C3  B2  A1
 * 	D4  C3  B2  A1
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);



		for(int i=1;i<=rows;i++) {		

			char ch='A'+rows-1;

			for(int j=rows;j>=1;j--) {
			
					printf("%c%d  ",ch--,j);
			}



			printf("\n");
		}

	}
