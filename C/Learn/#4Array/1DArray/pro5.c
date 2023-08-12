
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

		int flg=-1;

		for(int i=0;i<size;i++) {
			
			if(arr[i]%4==0 && arr[i]%5==0) {
				flg=i;
				break;
			}

		}

		if(flg==-1)
			printf("not found\n");
		else
			printf("%d is divisible by 4 and 5\n",arr[flg]);
	}
