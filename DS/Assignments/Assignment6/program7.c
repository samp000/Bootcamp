
	//find sum of rows
	
	#include<stdio.h>
	#include<stdlib.h>

	int **matRotationBy90(int r,int c,int arr[][c]) {
	
		int **res = (int**)calloc(r,sizeof(int*));

		for(int i=0;i<c;i++)
			res[i] = (int*)malloc(c*sizeof(int));

		//first find transpose
		for(int i=0;i<r;i++) {
			for(int j=0;j<c;j++) {

				res[i][j] = arr[j][i];
			}
		}

		//swap start and end of rows
	
		for(int i=0;i<r;i++) {
		
			int tmp = res[i][0];
			res[i][0] = res[i][c-1];
			res[i][c-1] = tmp;
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
			
		int **res = matRotationBy90(r,c,arr);

		printf("Array after rotation of 90 degrees is:\n");

		for(int i=0;i<r;i++) {
		
			for(int j=0;j<c;j++)
				printf("%d ",*(*(res+i)+j));

			printf("\n");
		}
	
		printf("\n");
	}
