
	//find sum of columns
	
	#include<stdio.h>
	#include<stdlib.h>

	int *colSum(int r,int c,int arr[][c]) {
	
		int *res = (int*)calloc(c,sizeof(int));

		for(int i=0;i<c;i++) {
		
			int s = 0;

			for(int j=0;j<r;j++) {

				s = s + arr[j][i];
			}

			*(res+i) = s;
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
			
		int *res = colSum(r,c,arr);

		printf("Array of sum of columns is:\n");

		for(int i=0;i<r;i++) {
		
			printf("%d ",*(res+i));

		}
	
		printf("\n");
	}
