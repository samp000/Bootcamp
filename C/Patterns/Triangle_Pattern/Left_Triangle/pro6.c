

/*
 * 	 1 3 5
 * 	 7 9 
 * 	 11
 */


	#include<stdio.h>

	void main() {

		int row;
		printf("Enter number of rows:");
		scanf("%d",&row);

		int num=1;

		for(int i=1;i<=row;i++)  {
			for(int j=row;j>=i;j--)  {

					printf("%d ",num);
					num=num+2;
			}

			printf("\n");

		}
	}
