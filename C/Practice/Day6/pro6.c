/*
 * 	4 3 2 1
 * 	  3 2 1
 * 	    2 1
 * 	      1
 */


	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);
	 
		for(int i=1;i<=rows;i++) {

			for(int sp=1;sp<=i;sp++) 
				printf("  ");

			int num=rows-i+1;

			for(int j=rows;j>=i;j--)
				printf("%d ",num--);

			printf("\n");
		}
	}
