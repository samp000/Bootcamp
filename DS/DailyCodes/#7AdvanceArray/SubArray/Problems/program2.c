
	//Counting Subarrays
	
	#include<stdio.h>
	
	void countSubArray(int arr[],int n,int b) {
	
		int cnt=0;

		for(int i=0;i<n;i++) {
		
			int sum=0;
			for(int j=i;j<n;j++) {
			
				sum = sum + arr[j];

				if(sum < b)
					cnt++;
			}
		}

		printf("Count of sub arrays with sum less than b is : %d\n",cnt);

	}

	void main() {
	
		int n;
		printf("Enter size of an array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");	
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		int b;

		printf("Enter b:");
		scanf("%d",&b);

		countSubArray(arr,n,b);
	}

