
	#include<stdio.h>

	int a=10,b;
	int *ptr=0;	//NULL Pointer
		
	void fun() {
	
		int x=30;

		printf("%d\n",a);
		printf("%d\n",b);

		ptr = &x;

		printf("%p\n",ptr);
		printf("%d\n",*ptr);
	}

	void main() {
	
		int y=40;

		printf("%d\n",a);
		printf("%d\n",b);


		fun();
		
		//at this moment stack frame of fun is poped and all variables in fun are destroyed
		//ptr still has address of variable x which is removed from memory
		//so ptr is dangling pointer

		printf("%p\n",ptr);	
		printf("%d\n",*ptr);
	}

