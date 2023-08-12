
	#include<stdio.h>
	
	void main() {
	
		int x=10,y=20,z=30;

		int* arr[] = {&x,&y,&z};

		printf("%ld\n",sizeof(arr));

		printf("%p\n",arr[0]);
		printf("%p\n",arr[1]);
		printf("%p\n",arr[2]);


		printf("%d\n",*arr[0]);
		printf("%d\n",*arr[1]);
		printf("%d\n",*arr[2]);
	}
