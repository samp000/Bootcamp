/*
 * 	* * * # * * * 
 * 	  * * # * * 
 * 	    * # * 
 * 	      #
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

			for(int j=1;j<=2*(rows-i)+1;j++)
				if(j==rows-i+1)
					printf("# ");
				else
					printf("* ");

			printf("\n");
		}
	}
