/*
 *
 * 	4
 * 	3  3
 * 	2  2  2
 * 	1  1  1  1
 */

	
	#include<stdio.h>

	
	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++) {
		
			for(int j=1;j<=i;j++) {
			
				printf("%d  ",rows-i+1);
			}

			printf("\n");
		}
	}
