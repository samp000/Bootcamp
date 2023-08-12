
	#include<stdio.h>
	
	void main() {
	
		int arr[2][3];

		printf("Enter array elements:");
		
		for(int i=0;i<2;i++) {
		
			for(int j=0;j<3;j++) {
			
				scanf("%d",&arr[i][j]);
			}
		}

		printf("Array elements are:\n");

		for(int i=0;i<2;i++) {
		
			for(int j=0;j<3;j++) {
			
				printf("%d ",arr[i][j]);
			}
			printf("\n");
		}

		//following loop prints adress of every 1D array

		for(int i=0;i<6;i++) {
		
			printf("%ld\n",arr[i]);
		}

	}
