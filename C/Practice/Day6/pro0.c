/*
 * 	* * * *
 * 	  * * *
 * 	    * *
 * 	      *
 *
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);


		for(int i=1;i<=rows;i++) {
		
			for(int sp=1;sp<i;sp++)
				printf("  ");

			for(int j=rows;j>=i;j--)
				printf("* ");

			printf("\n");
		}
	}
