
	#include<stdio.h>
	#include<stdlib.h>

	int size;

	char* retArr() {
	
	
		printf("Enter size of array:");
		scanf("%d",&size);

		char *carr = (char*)malloc(sizeof(size));

		printf("Enter string:");
		scanf("%s",carr);

		return carr;
	}

	void main() {

		char *arr = retArr();
	
		printf("Array elements are:");

		for(int i=0;i<size;i++) {
		
			printf("%c ",*(arr+i));
		}

		printf("\n");

		printf("%s\n",arr);
	}
