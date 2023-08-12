/*
 * 	1 
 * 	2 1
 * 	3 2 1
 * 	4 3 2 1
 * 	3 2 1
 * 	2 1
 * 	1
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows,cols,num;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=2*rows-1;i++) {
	

			if(i<=rows) {
			
				cols=i;
				num=i;
			}else {
		

				cols=2*rows-i;
				num=2*rows-i;	
			}

			for(int j=1;j<=cols;j++)
				printf("%d ",num--);

			printf("\n");

		}
	}
