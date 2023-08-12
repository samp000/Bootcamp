

/*
 * 	 A B C
 * 	 D E
 * 	 F
 */


	#include<stdio.h>

	void main() {

		int row;
		printf("Enter number of rows:");
		scanf("%d",&row);

		char ch='A';

		for(int i=1;i<=row;i++)  {
			for(int j=row;j>=i;j--)  {

					printf("%c ",ch++);
			}

			printf("\n");

		}
	}
