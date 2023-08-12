
	//equilibrium array

	#include<stdio.h>

	int findEquilibrium(int arr[],int n) {
	
		int forward[n],backward[n];

		forward[0] = arr[0];
		for(int i=1;i<n;i++) 
			forward[i] = forward[i-1] + arr[i];

		backward[n-1] = arr[n-1];
		
		for(int i=n-2;i>=0;i--)
			backward[i] = backward[i+1] + arr[i];

		printf("git it\n");


		for(int i=0;i<n;i++) {
		
			if(forward[i] == backward[i])
				return i;
		}

		return -1;
	}

	void main() {
	
		int n;
		printf("Enter size of array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		
		int ret =findEquilibrium(arr,n);

		if(ret != -1)
			printf("Equilibrium found at index %d\n",ret);
		else
			printf("Equilibrium not found %d\n",ret);

	}

