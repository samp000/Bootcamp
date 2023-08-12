
	#include<stdio.h>

	void sort(int arr[],int sz) {
	
		for(int i=0;i<sz;i++) {
		
			for(int j=0;j<sz-1;j++) {
			
				if(arr[j+1] < arr[j]) {
				
					int tmp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = tmp;
				}
			}
		}
	}

	void main() {
	
		int n;
		printf("Enter size of an array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");
		for(int i=0;i<n;i++)
			scanf("%d",arr+i);

		printf("Array elements before sorting are:");
		for(int i=0;i<n;i++)
			printf("%d ",*(arr+i));

		sort(arr,n);

		printf("\nArray elements before sorting are:");
		for(int i=0;i<n;i++)
			printf("%d ",*(arr+i));



		printf("\n");
	}
