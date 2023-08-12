
	//print array in range
	
	#include<stdio.h>
	

	void printArrayInRange(int arr[]) {
	
		int start=0,end=2;

		for(int i=start;i<=end;i++) 
			printf("%d ",arr[i]);

		printf("\n");
	}

	void main() {
	
		int n;
		printf("Enter size of an array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");	
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		printArrayInRange(arr);
	}
