/*
 *
 *           5
 *         5 6
 *       5 4 3
 *     5 6 7 8
 *   5 4 3 2 1  
 */

	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter rows:");
		scanf("%d",&rows);



		for(int i=1;i<=rows;i++) {
	
			int num = rows;

			for(int space=rows-1;space>=i;space--)
				printf("  ");

			for(int j=1;j<=i;j++) {
			
			
					printf("%-2d",num);
				
				if(i%2==0)
					num++;
				else
					num--;
				
			}

			printf("\n");
		}
	}
 
