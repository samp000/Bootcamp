
	#include<stdio.h>

	void main() {
	
		int size;
		printf("Enter size of array:");
		scanf("%d",&size);

		int arr[size];

		printf("Enter array elements:\n");

		for(int i=0;i<size;i++) {
			scanf("%d",&arr[i]);
		}

		int key,flg=-1;

		printf("Enter element to search:");
		scanf("%d",&key);

		for(int i=0;i<size;i++) {
			
			if(arr[i] == key) {
				flg=i;
				break;
			}

		}

		if(flg==-1)
			printf("%d is not found\n",key);
		else
			printf("%d is found at position %d\n",key,flg+1);
	}
