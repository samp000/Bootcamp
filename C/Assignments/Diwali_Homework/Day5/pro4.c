
	#include<stdio.h>

	int add(int a,int b) {
		return a+b;
	}

	void fun(int fun(int,int),int a,int b) {

		printf("Addition of %d and %d is %d\n",a,b,fun(a,b));
	}

	void main() {

		int a,b;
		printf("Enter two numbers:");
		scanf("%d %d",&a,&b);	

		fun(add,a,b);
	}
