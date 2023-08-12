
	//row to column zero
	
	#include<stdio.h>
	#include<stdlib.h>

	void makeRCZero(int i,int j,int **arr,int r,int c) {

		for(int x=0;x<r;x++) {
			arr[x][j] = 0;
		}

		for(int x=0;x<c;x++) {
			arr[i][x] = 0;
		}

	}

	int **makeZero(int r,int c,int arr[][c]) {
	
		int **res = (int**)calloc(r,sizeof(int*));

		for(int i=0;i<c;i++)
			res[i] = (int*)malloc(c*sizeof(int));

		for(int i=0;i<r;i++) {
			for(int j=0;j<c;j++) {
				
				res[i][j] = arr[i][j];
				
				if(arr[i][j] == 0)	
					makeRCZero(i,j,res,r,c);
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

		printf("Enter array1 elements:");
		for(int i=0;i<r*c;i++)
			scanf("%d",*arr+i);
		
		int **res = makeZero(r,c,arr);

		printf("matrix is:\n");

		for(int i=0;i<r;i++) {
		
			for(int j=0;j<c;j++)
				printf("%d ",*(*(res+i)+j));

			printf("\n");
		}
	
		printf("\n");
	}
