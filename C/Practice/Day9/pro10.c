/*
 *
 * 	1
 * 	2 4
 * 	3 6 9
 * 	4 8 12 16
 * 	3 6 9
 * 	2 4
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
			
				cols = i;
				num = i;
			}else {
			
				cols = 2*rows-i;
				num = cols;	//num=2*rows-i
			}

			for(int j=1;j<=cols;j++) {
				num = cols*j;
				printf("%d ",num);
			}

			printf("\n");
		}

	}
