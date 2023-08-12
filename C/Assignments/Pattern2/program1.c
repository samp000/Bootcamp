/*
 *	Program 1:
 *
 *	4 3 2 1
 *	5 4 3 2
 *	6 5 4 3
 *	7 6 5 4
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);

		int k=rows;


		for(int i=1;i<=rows;i++) {


			for(int j=1;j<=rows;j++) {
			
				printf("%d  ",k--);
			}
			
			k = rows+i;

			printf("\n");
		}

	}
