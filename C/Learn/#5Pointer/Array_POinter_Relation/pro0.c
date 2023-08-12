
	#include<stdio.h>

	void main() {
	
		int size;

		printf("Enter size of array:");
		scanf("%d",&size);

		printf("Enter array elements:");

		int arr[size];

		for(int i=0;i<size;i++) {
		
			scanf("%d",&arr[i]);
		}
		
		printf("Array elements are:");

		for(int i=0;i<size;i++) {
	
			printf("%d %d\n",arr[i],*(arr+i));
		}
	}
