/*
 * 	3
 * 	6   9
 * 	12  15  18
 *
 *
 * 	4
 * 	8   12
 *	16  20  24
 *	28  32  36  40
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	
		int num=rows;
	
		for(int i=1;i<=rows;i++) {
		
			for(int j=1;j<=i;j++) {
			
				printf("%-3d ",num);
				num+=rows;

			}

			printf("\n");
		}
	}
	
