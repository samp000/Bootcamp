/*
 * 	_ _ _ _ A
 * 	_ _ _ A B
 * 	_ _ A B C
 * 	_ A B C D
 * 	A B C D E
 */

	#include<stdio.h>

	void main() {
	
		int noOfRows;

		printf("Enter no of rows:");
		scanf("%d",&noOfRows);

		for(int row=1;row<=noOfRows;row++) {
		
			for(int space=1;space<=noOfRows-row;space++) {
			
				printf("  ");
			}

			char ch='A';

			for(int col=1;col<=row;col++){
			
				printf("%c ",ch++);
			}

			printf("\n");
		}

	}
