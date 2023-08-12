
	//print sum of sub array
	
	#include<stdio.h>
	

	void printSumOfSubArray(int arr[],int n) {
	
		int max=arr[0];
		int sum = 0;
		int start=0,startPrev=0,end=0;

		for(int i=0;i<n;i++) {
		
			sum = sum + arr[i];
			//start = i;
			
			if(sum < 0) {

				
				sum = 0;
				startPrev = start;
				start = i+1;
			}

			if(max < sum) {
				max = sum;
				end = i;
			}
		}

		printf("max Sum of Subarray:%d\n",max);
		
		printf("start:%d end :%d\n",startPrev,end);
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
