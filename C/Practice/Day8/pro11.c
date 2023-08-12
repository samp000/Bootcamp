/*
 * 	7 6 5 4 3 2 1
 * 	  5 4 3 2 1
 * 	    3 2 1
 * 	      1
 *
 */	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++) {
		
			for(int sp=1;sp<i;sp++)
				printf("   ");

			int num=2*(rows-i)+1;

			for(int j=1;j<=2*(rows-i)+1;j++) {
			
					printf("%-3d",num--);
			}

			printf("\n");
		}
	}
