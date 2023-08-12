
	//reverse array in range
	
	#include<stdio.h>

	int *revInRange(int arr[],int size,int s,int e) {

		int tmp;

		while(s <= e) {
	
			tmp = arr[s];
			arr[s] = arr[e];
			arr[e] = tmp;

			s++;
			e--;
		}

		return arr;
	}

	void main() {
	
		static int n;
		printf("Enter size of array:");
		scanf("%d",&n);

		int arr[n],s,e;

		printf("Enter array elements:");
		for(int i=0;i<n;i++) 
			scanf("%d",&arr[i]);

		printf("Enter start:");
		scanf("%d",&s);

		printf("Enter end:");
		scanf("%d",&e);

		int *ptr = revInRange(arr,n,s,e);	//returning pointer to first array element;

		printf("array elements are:\n");
		for(int i=0;i<n;i++) 
			printf("%d ",*(ptr+i));

		printf("\n");
	}
