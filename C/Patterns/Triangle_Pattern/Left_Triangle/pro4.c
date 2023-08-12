

/*
 * 	 * * * *
 * 	 * * *
 * 	 * *
 * 	 *
 */


	#include<stdio.h>

	void main() {

		int row;
		printf("Enter number of rows:");
		scanf("%d",&row);

		for(int i=1;i<=row;i++)  {
			for(int j=row;j>=i;j--)  {

					printf("* ");
			}

			printf("\n");

		}
	}
