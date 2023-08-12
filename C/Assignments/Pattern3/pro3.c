/*	Program 3:
 *
 * 	4 a 3 b
 * 	4 a 3 b
 * 	4 a 3 b
 * 	4 a 3 b
 *
 */
	
	#include<stdio.h>

	void main() {
	
		int rows;
		printf("Enter no of rows:");
		scanf("%d",&rows);

		for(int i=1;i<=rows;i++) {

			int num=rows;
			char ch = 'a';


			for(int j=1;j<=rows;j++) {

				if(j%2==0)
					printf("%c ",ch++);
				else
					printf("%d ",num--);

			}

			printf("\n");
		}
	}
