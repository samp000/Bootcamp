/*
 *      1
 *    1 2
 *  1 2 3
 *1 2 3 4  
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++) {
		
			for(int space=rows-1;space>=i;space--)
				printf("  ");

			for(int j=1;j<=i;j++) {
			
				printf("%-2d",j);
			}

			printf("\n");
		}
	}
 
