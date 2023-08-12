
	#include<stdio.h>

	void main() {
	
		int n;

		printf("Enter size of an array:");
		scanf("%d",&n);

		int arr[n];

		printf("Enter array elements:");
		
		for(int i=0;i<n;i++)
			scanf("%d",&arr[i]);

		int ele;
		printf("Enter element to search:");
		scanf("%d",&ele);

		int flg=-1;

		for(int i=0;i<n;i++) {
		
			if(arr[i] == ele) {
			
				flg=i;
				break;
			}
		}

		if(flg!=-1)
			printf("%d is found at %d position\n",ele,flg+1);
		else
			printf("%d is not found\n",ele);
		
	}
