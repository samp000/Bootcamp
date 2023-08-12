
	#include<stdio.h>


	int **fun(int r,int c,int arr[][c]) {

		int **res = (int**)calloc(r,sizeof(int*));

		for(int i=0;i<c;i++)
			res[i] = (int*)malloc(c*sizeof(int));

		for(int i=0;i<r;i++) {
			for(int j=0;j<c;j++) {

				res[i][j] = arr[j][i];
			}
		}	

		return res;
	}


	void main() {
	
		int arr[][3] = {{1,2,3},{4,5,6},{7,8,9}};



		int **ptr2 = &arr[0][0];

		printf("%p\n",&arr);
		printf("%p\n",&arr[0][0]);
		printf("%p\n",&arr[0]);



	}

