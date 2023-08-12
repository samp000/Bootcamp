/*
 *	Program 9:
 *	
 *	0  3  8
 *	15 24 35
 *	48 63 80
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);


		int num =1;

		for(int i=1;i<=rows;i++) {		

			for(int j=1;j<=rows;j++) {
			
					printf("%-3d  ",num*num-1);
					num++;
			}



			printf("\n");
		}

	}
