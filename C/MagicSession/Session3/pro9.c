
	#include<stdio.h>

	void main() {

		int row,col;

		printf("Enter row:");
		scanf("%d",&row);
		printf("Enter col:");
		scanf("%d",&col);

		int arr[row][col];

		printf("Enter elements:");

		for(int i=0;i<row;i++) {
		
			for(int j=0;j<col;j++) {
			
				scanf("%d",(*(arr+i)+j));
			}
		}
		
		for(int i=0;i<row;i++) {
		
			for(int j=0;j<col;j++) {
			
				printf("%d ",*(*(arr+i)+j));

			}

			printf("\n");
		}

		printf("\n");

	}
