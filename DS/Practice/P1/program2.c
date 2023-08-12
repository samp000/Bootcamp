
	//program to find sum in array within range

	#include<stdio.h>
	

	void rangeSum(int *arr,int size,int q) {
	
		int start,end;

		for(int i=0;i<q;i++) {
		
			printf("Enter start and end of range:");
			scanf("%d %d",&start,&end);

			int sum=0;

			for(int j=start;j<end;j++) {
			
				sum = arr[j] + sum;

			}

			printf("Sum for query %d is %d\n",q+1,sum);
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

	
