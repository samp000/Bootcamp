
	#include<stdio.h>

	void main() {
	
		int arr[5] = {10,20,30,40,50};
		
		int *ptr1 = arr;
	       
		int *ptr2 = &arr;	//warning: incoompatible pointer type

		printf("%d\n",*ptr1);
		printf("%d\n",*ptr1);		//this gives answer we want but this is wrong concept
						
		int (*ptr3)[5] = &arr;			//pointer to an array of size 5

		printf("%p\n",*ptr3);		//address
		printf("%d\n",**ptr3);		//10





	}
