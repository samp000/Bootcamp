
	#include<stdio.h>

	void insertionSort(int *arr, int size) {

		for(int i=1;i<size;i++) {
		
			int store = arr[i];
			int j = i-1;

			for(;j>=0 && arr[j]>store;j--) {
				arr[j+1] = arr[j];
			}

			arr[j+1] = store;
		}
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

		insertionSort(arr,n);

		printf("\nArray after sort:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);
	
		printf("\n");
	}
