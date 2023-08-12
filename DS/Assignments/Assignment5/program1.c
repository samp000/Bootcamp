
	//find number of elements less than max element

	#include<stdio.h>

	int countElement(int arr[],int n) {
	
		int cnt=0,max=-9999;

		for(int i=0;i<n;i++) {
		
			if(arr[i] > max)
				max = arr[i];
		}

		for(int i=0;i<n;i++) {
		
			if(arr[i] < max)
				cnt++;
		}

		return cnt;
	}

	void main() {
	
		int n;
		printf("Enter size of array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");
		for(int i=0;i<n;i++) 
			scanf("%d",&arr[i]);

		printf("no of less elements:%d\n",countElement(arr,n));
	}
