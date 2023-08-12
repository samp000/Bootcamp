/*
 *
 * 	1
 * 	1  4
 * 	4  7  10 
 * 	10 13 16 19
 * 	19 22 25 
 * 	25 28
 * 	28	
 */

	#include<stdio.h>

	void main() {
	
		int rows,cols,num=1;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=2*rows-1;i++) {
		
			if(i<=rows) {
				cols = i;
			}else {
				cols = 2*rows-i;
			}

			for(int j=1;j<=cols;j++) {
				printf("%d ",num);
				num+=3;
			}
			num-=3;

			printf("\n");
		}

	}
