
	#include<stdio.h>

	void add(int a,int b) {
		printf("%d\n",a+b);
	}
	
	void sub(int a,int b) {
		printf("%d\n",a-b);
	}

	void mult(int a,int b) {
		printf("%d\n",a*b);
	}

	void div(int a,int b) {
		printf("%d\n",a/b);
	}


	void main() {

		/*	
		 *	there is not any stack frames of these functions is pushed but still we storing there address			     here is concept of physical and logical address.
		 */

		void (*ptr[])(int,int) = {add,sub,mult,div};

		int sz = sizeof(ptr) / sizeof(ptr[0]);

		for(int i=0;i<sz;i++) {
			ptr[i](30,15);
			printf("Address : %p\n",ptr[i]);
		}
	}
