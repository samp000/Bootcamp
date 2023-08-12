
	//bubble sort using single for loop

	#include<stdio.h>

	void bubbleSort(int *arr, int size) {

		int i=0;

		for(int j=0;j<= size-1-i;j++){
			

			if(arr[j] > arr[j+1]) {	
			
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}

			if(i == size-1)
				break;
			
			if(j == size-i-2) {
			
				j = 0;
				i++;
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
