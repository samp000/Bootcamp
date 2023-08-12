
	#include<stdio.h>
	#include<stdlib.h>

	void fun(int *a) {

		printf("Function called \n");
		printf("%d\n",*a);	
		printf("%p\n",a);	

	}

	void func(void (*f)(int*),int*a) {
	
		f(a);

	}


	void main() {
	
		int x=10;

		func(fun,&x);
	}
