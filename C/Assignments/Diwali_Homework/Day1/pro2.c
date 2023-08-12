
	#include<stdio.h>

	void main() {
	
		int rows,cols;
		printf("Enter size rows and cols of an array:");
		scanf("%d %d",&rows,&cols);

		int arr1[rows][cols];
		int arr2[rows][cols];

		printf("Enter array elements:");

		for(int i=0;i<rows;i++) {
			
			for(int j=0;j<cols;j++) {
				scanf("%d",&arr1[i][j]);

				arr2[i][j] = arr1[i][j];	//copying elements from first array to seond array
			}

		}


		printf("Array elements are:\n");
		
		for(int i=0;i<rows;i++) {
		
			for(int j=0;j<cols;j++) {
				printf("%d ",arr2[i][j]);
			}
		
				printf("\n");
		}

		printf("\n");

	}
