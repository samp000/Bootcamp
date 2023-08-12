
	//find left max on array for every element and return that array
	//i/p: 5 2 1 -4 -2 9 3 4 7
	//o/p: 5 5 5 5 5 9 9 9 9

	#include<stdio.h>
	#include<stdlib.h>
	

	int *carrayForward(int *arr,int size) {
	
		int *res = (int*)calloc(size,sizeof(int));

		res[0] = arr[0];

		for(int i=1;i<size;i++) {

			if(arr[i] > res[i-1])
				res[i] = arr[i];
			else
				res[i] = res[i-1];
		}

		return res;
	}
	
	int *carrayBackward(int *arr,int size) {
	
		int *res = (int*)calloc(size,sizeof(int));

		res[size-1] = arr[size-1];

		for(int i=size-2;i>=0;i--) {

			if(arr[i] > res[i+1])
				res[i] = arr[i];
			else
				res[i] = res[i+1];
		}

		return res;
	}
	

	void main() {
	
		int n;
		printf("Enter size of array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		int *res1 = carrayForward(arr,n);
		printf("Forward array is :");
		for(int i=0;i<n;i++)
			printf("%d ",res1[i]);
		
		printf("\n");
		
		int *res2 = carrayBackward(arr,n);
		printf("Backward array is :");
		for(int i=0;i<n;i++)
			printf("%d ",res2[i]);
		
		printf("\n");
	}

	
