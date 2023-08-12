
	#include<stdio.h>

	struct Demo {
	
		int x,y;
	};

	void fun(struct Demo obj) {
	
		printf("%d\n",obj.x);
		printf("%d\n",obj.y);
	}

	void gun(struct Demo *ptr) {
	

		printf("%d\n",(*ptr).x);
		printf("%d\n",ptr->x);
	}

	void main() {
	
		struct Demo obj = {10,20};

		fun(obj);
		gun(&obj);
	}
