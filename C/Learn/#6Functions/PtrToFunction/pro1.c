
	#include<stdio.h>

	void add(int a,int b) {
		printf("%d\n",a+b);
	}
	
	void sub(float a,float b) {
		printf("%f\n",a-b);
	}

	void main() {
	
		void (*ptr)(int,int);

		ptr = &add;
		ptr(30,20);

		ptr = sub;
		ptr(30,20);
	
	}
