
		#include<stdio.h>
	#include<stdlib.h>
/*
	int **res = (int**)calloc(r,sizeof(int*));
		for(int i=0;i<c;i++)
			res[i] = (int*)malloc(c*sizeof(int));

*/	
	void matSum(int r,int c,int arr1[][c],int arr2[][c]) {
		
			if(r >= 0) {

				int res;

				for(int j=0;j<c;j++) 
					res = arr1[r][j] + arr2[r][j];

				printf("%d \n",res);
				
				matSum(r-1,c,arr1,arr2);
					
			}
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
			
		//int **res = matSum(r,c,arr1,arr2);
		
		matSum(r,c,arr1,arr2);
/*
		printf("matrix sum is:\n");

		for(int i=0;i<r;i++) {
		
			for(int j=0;j<c;j++)
				printf("%d ",*(*(res+i)+j));

			printf("\n");
		}
*/	
		printf("\n");
	}


