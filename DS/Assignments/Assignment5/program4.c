
	//reverse array in range
	
	#include<stdio.h>

	int *revArr(int arr[],int size) {

		int tmp,p1=0,p2=size-1;

		while(p1 <= p2) {
	
			tmp = arr[p1];
			arr[p1] = arr[p2];
			arr[p2] = tmp;

			p1++;
			p2--;
		}

		return arr;
	}

	void main() {
	
		static int n;
		printf("Enter size of array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");
		for(int i=0;i<n;i++) 
			scanf("%d",&arr[i]);

		int *ptr = revArr(arr,n);	//returning pointer to first array element;

		printf("array elements are:\n");
		for(int i=0;i<n;i++) 
			printf("%d ",*(ptr+i));

		printf("\n");
	}
