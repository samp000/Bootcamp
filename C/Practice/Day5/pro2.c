/*
 *      4
 *    4 3
 *  4 3 2
 *4 3 2 1

 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);



		for(int i=1;i<=rows;i++) {
		
			int num=rows;

			for(int space=rows-1;space>=i;space--)
				printf("  ");

			for(int j=1;j<=i;j++) {
			
				printf("%-2d",num--);
			}

			printf("\n");
		}
	}
 
