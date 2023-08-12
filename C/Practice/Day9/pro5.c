/*
 * 	3
 * 	2 3
 * 	1 2 3
 * 	0 1 2 3
 * 	1 2 3
 * 	2 3
 * 	3
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows,cols,num;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=2*rows-1;i++) {
		
			if(i<=rows) {
			
				cols = i;
				num = rows-i;
			}else {
			
				cols = 2*rows-i;
				num = i-rows;
			}

			for(int i=1;i<=cols;i++) 
				printf("%d ",num++);

			printf("\n");
		}

	}
