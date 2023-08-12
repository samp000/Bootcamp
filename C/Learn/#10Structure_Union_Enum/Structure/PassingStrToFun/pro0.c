
	#include<stdio.h>

	struct Demo {
	
		int x,y;
	};

	void main() {
	
		struct Demo obj = {10,20};

		printf("%p\n",obj);
		printf("%p\n",&obj.x);
		printf("%p\n",&obj);

	}
