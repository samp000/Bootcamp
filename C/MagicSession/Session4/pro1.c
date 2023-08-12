
	#include<stdio.h>

	int fun(int);

	void main() {
	
		int s;
		s = fun(10);
		printf("%d\n",s);
	}

	int fun(int s) {
	
		//s>20 ? return(9) : return(20);	cannot return from ternery operator
		int res;

		return s>20 ? 9 : 20;
	}
