
	//reverse array
	
	#include<stdio.h>

	void revArr(int arr[],int start,int end) {

		if(start >= end)
			return ;
	
		int tmp = arr[start];
		arr[start] = arr[end];
		arr[end] = tmp;

		start++;
		end--;
		
		revArr(arr,start,end);
	}

	void main() {

                int n;
                printf("Enter size of an array:");
                scanf("%d",&n);

                int arr[n];

                printf("Enter array elements:");
                for(int i=0;i<n;i++)
                        scanf("%d",&arr[i]);

                revArr(arr,0,n-1);

		printf("Array after revers:");
		for(int i=0;i<n;i++)
			printf("%d ",arr[i]);

		printf("\n");
        }

