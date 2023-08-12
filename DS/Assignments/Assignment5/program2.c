
	//find number of good pairs

	#include<stdio.h>

	int goodPairs(int arr[],int n,int k) {
	
		int pairs=0;

		for(int i=0;i<n;i++) {
		
			for(int j=i+1;j<n;j++){

				if(arr[i]+arr[j] == k)
					pairs++;
			}
		}

		
		return pairs;
	}

	void main() {
	
		int n;
		printf("Enter size of array:");
		scanf("%d",&n);

		int arr[n],k;

		printf("Enter array elements:");
		for(int i=0;i<n;i++) 
			scanf("%d",&arr[i]);
		
		printf("Enter k:");
		scanf("%d",&k);

		printf("no of good pairs:%d\n",goodPairs(arr,n,k));
	}
