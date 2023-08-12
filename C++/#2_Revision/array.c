
	#include<stdio.h>
	#include<stdlib.h>

	void disp(int **arr) {
	
		
			printf("%p ",arr);
			printf("% ",*arr);
			printf("%d ",**arr);
	}

	void main() {
	
		int arr[][3] = {10,20,30,40,50,60,70,80,90};

		int **arr1 = (int **)malloc(3 * sizeof(int*));

		for(int i=0;i<3;i++)
			arr1[i] = (int*)malloc(3 * sizeof(int));



		disp(arr1);

	}
