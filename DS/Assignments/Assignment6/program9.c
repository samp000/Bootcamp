
	//find sum of two mat
	
	#include<stdio.h>
	#include<stdlib.h>

	int **matSum(int r,int c,int arr1[][c],int arr2[][c]) {
	
		int **res = (int**)calloc(r,sizeof(int*));

		for(int i=0;i<c;i++)
			res[i] = (int*)malloc(c*sizeof(int));

		for(int i=0;i<r;i++) {
			for(int j=0;j<c;j++) {

				res[i][j] = arr1[i][j] + arr2[i][j];
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

		int arr1[r][c],arr2[r][c];

		printf("Enter array1 elements:");
		for(int i=0;i<r*c;i++)
			scanf("%d",*arr1+i);
		
		printf("Enter array2 elements:");
		for(int i=0;i<r*c;i++)
			scanf("%d",*arr2+i);
			
		int **res = matSum(r,c,arr1,arr2);

		printf("matrix sum is:\n");

		for(int i=0;i<r;i++) {
		
			for(int j=0;j<c;j++)
				printf("%d ",*(*(res+i)+j));

			printf("\n");
		}
	
		printf("\n");
	}
