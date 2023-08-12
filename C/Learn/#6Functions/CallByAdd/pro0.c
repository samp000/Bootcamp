
	#include<stdio.h>

	void swap(int*,int*);

	void main() {
	
		int x=10,y=20;

		printf("x:%d\n",x);
		printf("y:%d\n",y);

		swap(&x,&y);

		printf("x:%d\n",x);
		printf("y:%d\n",y);

	}

	void swap(int *x,int *y) {
	
		
		int tmp = *x;
		*x=*y;
		*y=tmp;
		
	}
