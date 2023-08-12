/*	
 *	4  3  2  1
 *	4  3  2
 *	4  3
 *	4
 */

	#include<stdio.h>

	void main() {
		
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++) {
		
			int num = rows;
			
			for(int j=rows;j>=i;j--) {

				printf("%d  ",num--);

			}

			printf("\n");
		}
	}
