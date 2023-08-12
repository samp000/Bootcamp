
	#include<stdio.h>

	void main() {
	
		int arr1[] = {1,2,3};
		int arr2[] = {10,20,30};
		int arr3[] = {11,22,33};

		int (*parr[3])[3] = {&arr1,&arr2,&arr3};
	
		printf("%d\n",***parr);
		printf("%d\n",*(**(parr)+1));
		printf("%d\n",*(**(parr)+2));
		
		printf("%d\n",**(*parr+1));
		printf("%d\n",*(**(parr+1)+1));
		printf("%d\n",*(**(parr+1)+2));
		
		printf("%d\n",**(*(parr+2)));
		printf("%d\n",*(**(parr+2)+1));
		printf("%d\n",*(**(parr+2)+2));
	}
