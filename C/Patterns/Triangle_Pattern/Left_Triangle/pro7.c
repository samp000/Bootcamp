

/*
 * 	 1 A 2 B
 * 	 1 A 2 
 * 	 1 A 
 * 	 1 
 */


	#include<stdio.h>

	void main() {

		int row;
		printf("Enter number of rows:");
		scanf("%d",&row);

		
		for(int i=1;i<=row;i++)  {
		
			int num=1;
			char ch='A';
		
			for(int j=1;j<=row-i+1;j++)  {

				if(j%2!=0)
					printf("%d ",num++);
				else
					printf("%c ",ch++);
			}

			printf("\n");

		}
	}
