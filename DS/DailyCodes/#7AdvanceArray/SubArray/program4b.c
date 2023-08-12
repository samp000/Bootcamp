
	//print sum of sub array
	
	#include<stdio.h>
	

	void printSumOfSubArray(int arr[],int n) {
	
		int max=arr[0];

		for(int i=0;i<n;i++) {
		
			int sum=0;
		
			for(int j=i;j<n;j++) {
			
				sum = sum + arr[j];
				
				if(sum > max)
					max = sum; 
			}
		}


		printf("max Sum of Subarray:%d\n",max);
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
