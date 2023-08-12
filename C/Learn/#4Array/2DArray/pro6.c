
	#include<stdio.h>
	
	void main() {

		int row,col;

		printf("Enter row:");
		scanf("%d",&row);
		
		printf("Enter col:");
		scanf("%d",&col);

		int arr[row][col];
		int sum=0;
		
		printf("Enter array elements:");
		
		for(int i=0;i<row;i++) {
		
			for(int j=0;j<col;j++) {
			
				scanf("%d",&arr[i][j]);
			}
		}

		printf("Array elements are:\n");

		for(int i=0;i<row;i++) {
		
			for(int j=0;j<col;j++) {
			
				printf("%d ",arr[i][j]);
				
				if(i==j)
					sum+=arr[i][j];
			}
			printf("\n");
		}

		printf("Sum of digonal array elements:%d\n",sum);

	}
