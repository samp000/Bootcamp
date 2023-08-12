
	//print all sub array
	
	#include<stdio.h>
	

	void printAllSubArray(int arr[],int n) {
	
		for(int i=0;i<n;i++) {
		
			for(int j=i;j<n;j++) {
			
				printf("%d ",arr[j]);
			}
				printf("\n");
		}
	}

	void main() {
	
		int n;
		printf("Enter size of an array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");	
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		printAllSubArray(arr,n);
	}
