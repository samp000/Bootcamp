
	#include<stdio.h>

	int *gptr=NULL;

	void fun() {
	
		int x=50;
		gptr = &x;
		
		printf("Address in gptr:%p\n",gptr);
		printf("Value in gptr:%d\n",*gptr);

	}

	void main() {
	
		int a=10;

		int* ptr1;		//wild pointer
		
		printf("Address in ptr1:%p\n",ptr1);

		int* ptr2 = NULL;	//NULL pointer	
		
		printf("Address in ptr2:%p\n",ptr2);

		void* ptr3 = &a;	//void pointer
		
		printf("Address in ptr3:%p\n",ptr3);
//		printf("value in ptr3:%d\n",*ptr3);	error
		
		fun();
	

		//dangling pointer
		printf("Address in gptr:%p\n",gptr);
		printf("Value in gptr:%d\n",*gptr);

	}
