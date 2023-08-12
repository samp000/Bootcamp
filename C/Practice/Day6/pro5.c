/*
 * 	1 2 3 4
 * 	  2 3 4
 * 	    3 4
 * 	      4
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

			int num=i;

			for(int j=rows;j>=i;j--)
				printf("%d ",num++);

			printf("\n");
		}
	}
