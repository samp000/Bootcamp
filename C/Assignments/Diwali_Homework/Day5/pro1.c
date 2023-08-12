
	#include<stdio.h>

	void evenArr(int *arr,int size) {
	
		for(int i=0;i<size;i++) {
		
			if(*(arr+i)%2==0)
				printf("%d ",*(arr+i));
		}

		printf("\n");
	}

	void main() {
	
		int size;
		printf("Enter size of an array:");
		scanf("%d",&size);

		int arr[size];

		printf("Enter array elements:");
		
		for(int i=0;i<size;i++)
			scanf("%d",arr+i);
	
		printf("Even elements in an array:");

		evenArr(arr,size);

	}
