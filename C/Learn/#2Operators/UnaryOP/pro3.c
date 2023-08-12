
	#include<stdio.h>

	void main() {
	
		int x = 5;

		int ans = ++x + ++x;

		printf("x:%d\n",x);		//7
		printf("ans:%d\n",ans);		//14
	}


	/*
	 * 	++x calls to pre()				//this is not an actual function but it is implemented as this
	 *
	 * 	pre(x) {
	 *
	 * 		x = x+1;
	 * 		return x;
	 * 	}
	 *
	 */
