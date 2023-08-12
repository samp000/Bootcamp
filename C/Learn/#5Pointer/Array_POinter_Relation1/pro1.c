
	#include<stdio.h>

	void main() {
	
		int arr[3][3] = {1,2,3,4,5,6,7,8,9};

		printf("%d\n",arr[2][1]);			//this line internally goes like below line.
		printf("%d\n",*(*(arr+2)+1));


		printf("%d\n",arr[1][2]);
		printf("%d\n",*(*(arr+1)+2));
	}
