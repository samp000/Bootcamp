
	#include<stdio.h>

	void main() {
	
		int arr[] = {10,20,30,40,50};

		int *ptr1 = &arr[1];
		int *ptr2 = &arr[2];

		printf("%p\n",ptr1);	//0x104
		printf("%p\n",ptr2);	//0x108

		ptr1++;
		--ptr2;

		printf("%d\n",*ptr1);	//30
		printf("%d\n",*ptr2);	//20

		printf("%p\n",ptr1);	//0x108
		printf("%p\n",ptr2);	//0x104

		printf("%ld\n",(ptr1-ptr2)+2);		//3
		printf("%p\n",ptr2+(ptr1-ptr2));	//0x108
		printf("%d\n",*(ptr2+(ptr1-ptr2)));	//30

		/*

		printf("%p\n",(ptr1*2));		//error
		printf("%d\n",*(ptr1*ptr2));		//error
		printf("%p\n",ptr1/2);			//error
	
		*/
	}
