
	#include<stdio.h>

	void main() {
	
		int arr[3][3] = {1,2,3,4,5,6,7,8,9};

		int (*ptr)[3][3] = &arr;

		//line prints 8 value in matrix
		printf("%d\n",*(*(*ptr+2)+1));
	}
