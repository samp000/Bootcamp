/*
 *	Program 9:
 *	
 *	2   5   10
 *	17  26  37
 *	50  65  82
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
			
					printf("%-3d  ",num*num+1);
					num++;
			}



			printf("\n");
		}

	}
