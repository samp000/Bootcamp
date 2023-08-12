
	//find sum of rows
	
	#include<stdio.h>
	#include<stdlib.h>

	int **matTranspose(int r,int c,int arr[][c]) {
	
		int **res = (int**)calloc(r,sizeof(int*));

		for(int i=0;i<c;i++)
			res[i] = (int*)malloc(c*sizeof(int));

		for(int i=0;i<r;i++) {
			for(int j=0;j<c;j++) {

				res[i][j] = arr[j][i];
			}
		}

		return res;
	}

	void main() {
	
		int r,c;

		printf("Enter rows:");
		scanf("%d",&r);

		printf("Enter cols:");
		scanf("%d",&c);

		int arr[r][c];

		printf("Enter array elements:");

		for(int i=0;i<r*c;i++)
			scanf("%d",*arr+i);
			
		int **res = matTranspose(r,c,arr);

		printf("Array after transpose is:\n");

		for(int i=0;i<r;i++) {
		
			for(int j=0;j<c;j++)
				printf("%d ",*(*(res+i)+j));

			printf("\n");
		}
	
		printf("\n");
	}
