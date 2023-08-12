
	#include<stdio.h>

	void main() {
	
		int mat,rows,cols;
		printf("Enter size mat, rows and cols of an array:");
		scanf("%d %d %d",&mat,&rows,&cols);

		int arr1[mat][rows][cols];

		int sum=0;

		printf("Enter array elements:");

		for(int k=0;k<mat;k++) {

			for(int i=0;i<rows;i++) {
			
				for(int j=0;j<cols;j++) {
					scanf("%d",&arr1[k][i][j]);
						
					if(i==j)
						sum = sum+arr1[k][i][j];
						
				}
			}

		}


		printf("Array elements are:\n");
		
		for(int k=0;k<mat;k++) {

			for(int i=0;i<rows;i++) {
			
				for(int j=0;j<cols;j++) {
					printf("%d ",arr1[k][i][j]);
						
				}
		
				printf("\n");
			}
		
				printf("\n");
		}

		printf("Sum of left digonal elements of 3d array:%d\n",sum);

	}
