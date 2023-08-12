
	#include<stdio.h>

	void main() {

		int mat,row,col;

		printf("Enter mat:");
		scanf("%d",&mat);
		printf("Enter row:");
		scanf("%d",&row);
		printf("Enter col:");
		scanf("%d",&col);

		int arr[mat][row][col];

		printf("Enter elements:");

		for(int i=0;i<mat;i++) {
		
			for(int j=0;j<row;j++) {
			
				for(int k=0;k<col;k++) {
			
					scanf("%d",(*(*(arr+i)+j)+k));
				}
			}
		}
		
		for(int i=0;i<mat;i++) {
		
			for(int j=0;j<row;j++) {
			
				for(int k=0;k<col;k++) {
				
					printf("%d ",*(*(*(arr+i)+j)+k));
				}
		
				printf("\n");
			}

			printf("\n");
		}
	}
