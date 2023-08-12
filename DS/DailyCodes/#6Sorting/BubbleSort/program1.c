
	#include<stdio.h>

	void bubbleSort(int *arr, int size) {
	
		for(int i=0;i<size;i++) {
		
			for(int j=0;j<size-1-i;j++){
			
				if(arr[j] > arr[j+1]) {
				
					arr[j] = arr[j] + arr[j+1];
					arr[j+1] = arr[j] - arr[j+1];
					arr[j] = arr[j] - arr[j+1];
				}
			} 
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

		bubbleSort(arr,n);

		printf("\nArray after sort:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);
	
		printf("\n");
	}
