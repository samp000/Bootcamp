
	//Sum of all sub arrays
	
	#include<stdio.h>

	void sumOfAllSubArray(int arr[],int n) {
	
		int totalSum=0;

		for(int i=0;i<n;i++) {
		
			int sum=0;
			
			for(int j=i;j<n;j++) {
				
				sum = sum + arr[j];
				totalSum = totalSum + sum;
			}
		}

		printf("Sum of all subarrays:%d\n",totalSum);
	}
	

	void main() {
	
		int n;
		printf("Enter size of an array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");	
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		sumOfAllSubArray(arr,n);
	}

