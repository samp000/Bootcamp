/*
 * 	1 2 3 4
 * 	  1 2 3
 * 	    1 2
 * 	      1
 *
 */


	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	 
		for(int i=1;i<=rows;i++) {

			for(int sp=1;sp<=i;sp++) 
				printf("  ");

			int num=1;

			for(int j=rows;j>=i;j--)
				printf("%d ",num++);

			printf("\n");
		}
	}
