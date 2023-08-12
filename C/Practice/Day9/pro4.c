/*
 * 	4
 * 	3 3
 * 	2 2 2
 * 	1 1 1 1 
 * 	2 2 2 
 * 	3 3
 * 	4
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
				num=rows-i+1;
			}else {
			
				cols=2*rows-i;
				num++;
			}

			for(int j=1;j<=cols;j++) 
				printf("%d ",num);

			printf("\n");
		}
	}
