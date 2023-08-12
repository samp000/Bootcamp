/*
 * 	1
 * 	3 2 1
 * 	5 4 3 2 1
 * 	3 2 1
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
				
				cols = 2*i-1;
				num = cols;		//num=2*i-1
			}else {
			
				cols = cols-2;
				num = cols;
			}

				
			for(int j=1;j<=cols;j++)
				printf("%d ",num--);

			printf("\n");


		}
	}
