
	//find sum main digonal
		
	#include<stdio.h>
	#include<stdlib.h>

	int areMatSame(int r,int c,int arr1[][c],int arr2[][c]) {
	
		for(int i=0;i<c;i++) {

			for(int j=0;j<r;j++) {

				if(arr1[i][j] != arr2[i][j])
					return 0;
			}

		}

		return 1;
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
		
		printf("\nEnter array2 elements:");
		for(int i=0;i<r*c;i++)
			scanf("%d",*arr2+i);
			
		if(areMatSame(r,c,arr1,arr2))
			printf("both matrix are same\n");
		else
			printf("both matrix are not same\n");
		
		printf("\n");
	}
