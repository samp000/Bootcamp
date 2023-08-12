	//passing function which takes "integer pointer and returns void pointer" to a function

	#include<stdio.h>
	#include<stdlib.h>

	void* createArray(int *size) {
	
		int* arr = (int*)malloc(sizeof(*size*4));	//created array on heap ,otherwise local array creation is not efficient here(we want address of array)

		printf("Enter array elements:");

		for(int i=0;i<*size;i++) {
			scanf("%d",arr+i);
		}

		return arr;
	}

	void printArr(void* (*farr)(int*) ,int *sz) {
	
		int *aptr =(int*)farr(sz);

		printf("Array elements are:");

		for(int i=0;i<*sz;i++) {
		
			printf("%d ",*(aptr+i));
		}

		printf("\n");

	}

	void main() {
	
		int size;
		printf("Enter size of array:");
		scanf("%d",&size);
		printArr(createArray,&size);
	}
