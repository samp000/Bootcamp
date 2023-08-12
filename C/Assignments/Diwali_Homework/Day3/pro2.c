
	#include<stdio.h>

	void main() {
	
		int a=10,b=20,c=30,d=40;

		int* arr[] = {&a,&b,&c,&d};		//array of pointers

		for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
			printf("%d ",**(arr+i));

		printf("\n");
	}
