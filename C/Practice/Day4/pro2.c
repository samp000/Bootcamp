/*
 * 	1  2  3  4 
 * 	1  2  3
 * 	1  2 
 * 	1 
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++) {
		
			int num=1;

			for(int j=rows;j>=i;j--) {
			
				printf("%-3d ",num++);
			}

			printf("\n");
		}

	}
