
	//print maximum sum of subarray
	
	#include<stdio.h>
	

	void printMaxSumOfSubArray(int arr[],int n) {
	
		int max = arr[0];

		for(int i=0;i<n;i++) {
		
			for(int j=i;j<n;j++) {
			
				int sum=0;

				for(int k=i;k<=j;k++) {
				
					sum = sum + arr[k];
				}

				if(sum > max)
					max = sum;
			}
		}

			
		printf("max Subarray Sum:%d\n",max);

	}

	void main() {
	
		int n;
		printf("Enter size of an array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");	
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		printMaxSumOfSubArray(arr,n);
	}
