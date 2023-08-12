/*
 *	Program 8:
 *	
 *	18 14 16
 *	12 10 8
 *	6  4  2 
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;

		printf("Enter no of rows:");
		scanf("%d",&rows);


		int num = rows*rows*2;

		for(int i=1;i<=rows;i++) {		

			for(int j=1;j<=rows;j++) {
			
					printf("%-3d  ",num);
					num-=2;
			}



			printf("\n");
		}

	}
