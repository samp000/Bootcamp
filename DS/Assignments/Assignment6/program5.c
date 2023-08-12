
	#include<stdio.h>
	#include<stdlib.h>

	int **antiDigonal(int N,int arr[][N]) {

		int r = (2*(N-1))+1;
		int c = N;
	

		int **res = (int**)malloc(r * sizeof(int*));

		for(int i=0;i<r;i++) 
			res[i] = (int*)malloc(c * sizeof(int));

		for(int i=0;i<N;i++) {
			for(int j=0;j<N;j++) {
				res[i][j] = 0;
			}
		}

		for(int i=0;i<N;i++) {
		
			for(int j=0;j<N;j++)
				res[i][j] = arr[i][j];

			if(i<N)
				i++;
		}


		return res;

	}

	
	void main() {

		int N;


		printf("Enter N:");
		scanf("%d",&N);

		int arr[N][N];

		printf("Enter array elements:");

		for(int i=0;i<N;i++) {
		
			for(int j=0;j<N;j++) {
				scanf("%d",&arr[i][j]);
			}
		}


		int **res = antiDigonal(N,arr);
		int rows = (2*(N-1)+1);
		int cols = N;

		  for(int i=0;i<N;i++) {

                        for(int j=0;j<N;j++) 
                                printf("%d ",arr[i][j]);

                        printf("\n");
		  }

                printf("\n\n");


		  for(int i=0;i<rows;i++) {

                        for(int j=0;j<cols;j++) 
                                printf("%d ",res[i][j]);

                        printf("\n");
		  }

		printf("\n");
	}

