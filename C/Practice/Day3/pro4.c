/*
 * 	1
 * 	1  2
 * 	1  2  3
 * 	1  2  3  4
 */

	
	#include<stdio.h>

	
	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		int num=1;

		for(int i=1;i<=rows;i++) {
		
			for(int j=1;j<=i;j++) {
			
				printf("%-3d  ",j);
			}

			printf("\n");
		}
	}
