
	#include<stdio.h>

	void main() {
	
		int x=10;
		auto int y=20;

		printf("Val of x:%d\n",x);
		printf("address of x:%p\n",&x);
		
		printf("Val of y:%d\n",y);
		printf("address of y:%p\n",&y);
	}

	//bydefault all local variables are auto. here x and y both have auto storage class
