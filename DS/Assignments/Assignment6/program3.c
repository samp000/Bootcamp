
	//find sum main digonal
		
	#include<stdio.h>
	#include<stdlib.h>

	int mainDigonalSum(int r,int c,int arr[][c]) {
	
		int *res = (int*)calloc(c,sizeof(int));
		int s=0;

		for(int i=0;i<c;i++) {

			for(int j=0;j<r;j++) {

				if(i == j)
				s = s + arr[j][i];
			}

		}

		return s;
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
			
		int res = mainDigonalSum(r,c,arr);

		printf("Sum of main digonal is:%d\n",res);
	
		printf("\n");
	}
