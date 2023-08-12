/*
 * 	1  2  3  4  5  
 * 	2  3  4  5
 * 	3  4  5
 * 	4  5
 * 	5
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
		for(int i=1;i<=rows;i++) {
			
			int num=i;
			
			for(int j=rows;j>=i;j--) {
			
				printf("%-3d ",num++);
			}

			printf("\n");
		}

	}
