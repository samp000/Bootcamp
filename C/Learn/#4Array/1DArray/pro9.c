
	#include<stdio.h>

	void main() {
	
		int arr[0];

		printf("%ld\n",sizeof(arr));

		arr[0] = 10;
		
		printf("%ld\n",sizeof(arr));
		
		printf("%d\n",arr[0]);
		printf("%d\n",arr[1]);
	}
