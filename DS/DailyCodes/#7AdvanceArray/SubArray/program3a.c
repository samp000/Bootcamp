
	//print sum of sub array
	
	#include<stdio.h>
	

	void printSumOfSubArray(int arr[],int n) {
	
		for(int i=0;i<n;i++) {
		
			for(int j=i;j<n;j++) {
			
				int sum=0;

				for(int k=i;k<=j;k++) {
				
					sum = sum + arr[k];
				}

				printf("%d\n",sum);
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
			scanf("%d",&arr[i]);

		printSumOfSubArray(arr,n);
	}
