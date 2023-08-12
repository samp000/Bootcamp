
	//find the sum of range in an array with no of queries(using prefix sum)
	
	#include<stdio.h>

	void rangeSum(int arr[],int size,int q) {
	
		//int prefixArray[size];

		//prefixArray[0] = arr[0];

		//creating prefix array
		for(int i=1;i<size;i++)
			//prefixArray[i] = prefixArray[i-1] + arr[i];
			arr[i] = arr[i-1] + arr[i];

		for(int i=1;i<=q;i++) {
	
			int start,end,sum;

			printf("Enter start:");
			scanf("%d",&start);
			
			printf("Enter end:");
			scanf("%d",&end);

			if(start == 0) {
				//sum = prefixArray[end];
				sum = arr[end];
			} else {
				//sum = prefixArray[end] - prefixArray[start-1];
				sum = arr[end] - arr[start-1];

			}
			printf("Sum of range %d to %d is %d\n",start,end,sum);	
		}
	}

	void main() {
	
		int n,q;
		printf("Enter size of array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		printf("Enter no of queries:");
		scanf("%d",&q);
		
		rangeSum(arr,n,q);

		printf("\n");
	}

