
	#include<stdio.h>
	
	void main() {
	
		int x=10;
		char ch='A';
		double d = 20.85;


	//	int* arr[] = {&x,&ch,&d};	//gives warning

		void* arr[] = {&x,&ch,&d};	//void pointer can store address of any datatype

		printf("%ld\n",sizeof(arr));

		printf("%p\n",arr[0]);
		printf("%p\n",arr[1]);
		printf("%p\n",arr[2]);


		printf("%d\n",*((int*)arr[0]));
		printf("%c\n",*((char*)arr[1]));
		printf("%lf\n",*((double*)arr[2]));
	}
