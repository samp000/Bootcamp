//tail recursion

	#include<stdio.h>

	int tailDemo(int x) {
	
		if(x == 1)
			return 1;

		return tailDemo(--x);
	}

	void main() {
	
		printf("%d\n",tailDemo(4));
	}
	
