
	#include<stdio.h>

	void main() {
	
		int n;

		printf("Enter size of an array:");
		scanf("%d",&n);

		int arr1[n],arr2[n];

		printf("Enter array elements of first array:");
		for(int i=0;i<n;i++)
			scanf("%d",&arr1[i]);
		
		printf("Enter array elements of second array:");
		for(int i=0;i<n;i++) {
			scanf("%d",&arr2[i]);
		}

		printf("\nFirst array:");
		for(int i=0;i<n;i++)
			printf("%d ",arr1[i]);
		
		printf("\nSecond array:");
		for(int i=0;i<n;i++) {
			printf("%d ",arr2[i]);
		
			arr2[i]+=arr1[i];
		}

		printf("\nArray after addition:");
		for(int i=0;i<n;i++)
			printf("%d ",arr2[i]);


		printf("\n");
		
	}
