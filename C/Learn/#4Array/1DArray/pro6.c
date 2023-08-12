/*
 *	Assigning an array to an array
 *
 * */

	#include<stdio.h>

	void main() {
	
		int arr1[3],arr2[3];

		arr1[0] = 10;
		arr1[1] = 20;
		arr1[2] = 30;

		printf("Array1:\n");
		for(int i=0;i<3;i++) 
			printf("%d\n",arr1[i]);

		arr2 = arr1;			//assignment to expression with array type

		printf("Array2:\n");
		for(int i=0;i<3;i++) 
			printf("%d\n",arr2[i]);

	}
