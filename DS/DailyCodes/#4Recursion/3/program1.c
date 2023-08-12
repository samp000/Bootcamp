
	#include<stdio.h>

	int fib(int n) {

		int f1=0,f2=1,res=0;
		int i=0;

		while(++i != n) {
			res = f1 + f2;
			f1 = f2;
			f2 = res;
		}

		return res;
	}

	void main() {
	
		printf("%d\n",fib(5));
	}
