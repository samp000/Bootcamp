/*
 * 	1 2 3 4 5 
 * 	  6 7 8
 * 	    9
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		int num=1;

		for(int i=1;i<=rows;i++) {
		
			for(int sp=1;sp<i;sp++)
				printf("    ");

			for(int j=1;j<=2*(rows-i)+1;j++) {
			
				printf("%-4d",num++);
			}

			printf("\n");
		}
	}
	
