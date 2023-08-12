/*
 * 			4
 * 		      3 3 3
 * 		    2 2 2 2 2
 * 		  1 1 1 1 1 1 1
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
		for(int i=1;i<=rows;i++) {
		
			for(int sp=rows;sp>i;sp--)
				printf("   ");

			int num = rows-i+1;

			for(int j=1;j<=2*i-1;j++)
				printf("%-2d ",num);

			printf("\n");
		}
	}
