
	#include<stdio.h>

	void selectionSort(int *arr, int size) {
	
		for(int i=0;i<size-1;i++) {
		
			int minIndex = i;

			for(int j=i+1;j<size;j++){
			
				if(arr[j] < arr[minIndex]) 
					minIndex = j;
			} 

			int tmp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = tmp;
		}
	}

	void main() {
	
		int n;

		printf("Enter the size of array:");
		scanf("%d",&n);

		int arr[n];
		printf("Enter array elements:");
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);


		printf("Array before sort:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);

		selectionSort(arr,n);

		printf("\nArray after sort:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);
	
		printf("\n");
	}
