
	#include<stdio.h>

	void main() {
	
		int n;
		printf("Enter size of an array:");
		scanf("%d",&n);

		int arr[n],max1=0,max2=0;

		printf("Enter array elements:");

		for(int i=0;i<n;i++) {
			scanf("%d",&arr[i]);

			if(max1<arr[i])
				max1 = arr[i];
		}

		for(int i=0;i<n;i++) {
		
			if(max1>arr[i] && max2<arr[i])
				max2 = arr[i];
		}

		printf("First largest:%d\nSecond Largest:%d\n",max1,max2);

	}
