/*
 *	Program 1:
 *
 *	1 2 3 4
 *	2 3 4 5
 *	3 4 5 6
 *	4 5 6 7
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);


		for(int i=1;i<=rows;i++) {
		
			int k=i;

			for(int j=1;j<=rows;j++) {
			
				printf("%d  ",k++);
			}
			printf("\n");
		}

	}
