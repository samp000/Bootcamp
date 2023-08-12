
	//Good subarray

	#include<stdio.h>

	void goodSubArray(int arr[],int n,int b) {

		int i,j,k;
		int cnt=0;

		for(i=0;i<n;i++) {
		
			for(j=i;j<n;j++) {
			
				int sum=0;

				for(k=i;k<=j;k++) {

					sum = sum + arr[k];
				}

				if( ((j-k+1)%2==0 && sum < b) || (j-k+1)%2!=0 && sum>b)
					cnt++;
			}
		}

		printf("No of good arrays:%d\n",cnt);
	}
	
	

	void main() {
	
		int n;
		printf("Enter size of an array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");	
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		int k;

		printf("Enter k:");
		scanf("%d",&k);

		goodSubArray(arr,n,k);
	}


