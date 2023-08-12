
	#include<stdio.h>

	void main() {
	
		int n;

		printf("Enter size of an array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");
		
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		int ecnt=0,ocnt=0;

		for(int i=0;i<n;i++) {
		
			if(arr[i]%2==0) 
				ecnt++;
			else
				ocnt++;
		}

		printf("count of even elements:%d\n",ecnt);
		printf("count of odd elements:%d\n",ocnt);

		
	}
