/*
 * 	1 2 3 4 3 2 1
 * 	  1 2 3 2 1
 * 	    1 2 1
 * 	      1
 */	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++) {
		
			for(int sp=1;sp<i;sp++)
				printf("   ");

			int num=1;

			for(int j=1;j<=2*(rows-i)+1;j++) {
			
				if(j<rows-i+1)
					printf("%-3d",num++);
				else
					printf("%-3d",num--);
			}

			printf("\n");
		}
	}
