/*
 * 	*
 * 	* * *
 * 	* * * * *
 * 	* * *
 * 	*
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows,cols=1;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=2*rows-1;i++) {
	
			for(int j=1;j<=cols;j++)
				printf("* ");

			printf("\n");

			if(i<rows) {
			
				cols = cols+2;
			}else {
			
				cols = cols-2;
			}
		}
	}
