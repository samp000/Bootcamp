
	//rotate array by k
	
	#include<stdio.h>
	#include<stdlib.h>

	int *rotateArr(int arr[],int n,int k) {

		int *res = (int*)calloc(n,sizeof(int));
		
		int p1=0;		//for resultant array
		int p2 = n-k;	//for original array
	
		while(p2 <= n-1) 
			res[p1++] = arr[p2++];

		p2 = 0;

		while(p2 < n-k)
			res[p1++] = arr[p2++];

		return res;
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
		
		int *ptr = rotateArr(arr,n,k);       //returning pointer to first array element;

                printf("array elements are:\n");
                for(int i=0;i<n;i++)
                        printf("%d ",*(ptr+i));

                printf("\n");

	}
