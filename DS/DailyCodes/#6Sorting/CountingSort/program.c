
	#include<stdio.h>


	void countingSort(int arr[],int size) {
	
		int max=arr[0];

		//finding max element to create new array
		for(int i=1;i<size;i++) {
			if(max < arr[i])
				max = arr[i];
		}

		int countArr[max+1];

		//first filling array with '0' to avoid garbage values
		for(int i=0;i<=max;i++)
			countArr[i] = 0;

		//filling actual values in counting array
		for(int i=0;i<size;i++) 
			countArr[arr[i]]++;

		printf("\n=========================================\n");
		printf("\nCounting array: ");
		for(int i=0;i<=max;i++)
			printf("%d ",countArr[i]);
		printf("\n=========================================\n");

		//making commulative array
		for(int i=1;i<=max;i++)
			countArr[i] = countArr[i] + countArr[i-1];

		printf("\n=========================================\n");
		printf("\nCommulative array: ");
		for(int i=0;i<=max;i++)
			printf("%d ",countArr[i]);
		printf("\n=========================================\n");


		int output[max+1];

		for(int i=size-1;i>=0;i--) {
		
			output[countArr[arr[i]]-1] = arr[i];
			countArr[arr[i]]--;
		} 

		for(int i=0;i<size;i++)
			arr[i] = output[i];
		

		printf("\n");
	}

	void main() {
	
		int n;

		printf("Enter the size of array:");
		scanf("%d",&n);

		int arr[n];
		printf("Enter array elements:\n");
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);


		printf("Array before sort:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);

		countingSort(arr,n);

		printf("\nArray after sort:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);
	
		printf("\n");
	}

