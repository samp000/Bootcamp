
	#include<stdio.h>

	void main() {
	
		int n;
		printf("Enter size of an array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");
		for(int i=0;i<n;i++)
			scanf("%d",arr+i);

		printf("Array elements are:");
		for(int i=0;i<n;i++)
			printf("%d ",*(arr+i));

		printf("\n");
	}
