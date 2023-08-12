
	//print sum of sub array using prefix sum
	
	#include<stdio.h>
	

	void printSumOfSubArray(int arr[],int n) {

		int pSum[n];
		pSum[0] = arr[0];

		for(int i=1;i<n;i++) {
		
			pSum[i] = pSum[i-1] + arr[i];
		}

		for(int i=0;i<n;i++) {

			for(int j=i;j<n;j++) {
			
				int sum=0;

				if(i == 0)
					sum = pSum[j];
				else
					sum = pSum[j] - pSum[i-1];


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
