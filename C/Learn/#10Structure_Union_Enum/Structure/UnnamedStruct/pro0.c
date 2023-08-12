
	#include<stdio.h>

	struct {
	
		int x;
		float y;
	}obj = {10,20.5f};

	void main() {
	
		printf("%d\n",obj.x);
		printf("%f\n",obj.y);
	}
