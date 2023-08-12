//non-tail recursion

	#include<stdio.h>

	int tailDemo(int x) {
	
		if(x == 1)
			return 1;

		return tailDemo(--x) + 3;
	}

	void main() {
	
		printf("%d\n",tailDemo(4));
	}
	
