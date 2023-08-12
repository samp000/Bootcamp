
	#include<stdio.h>
	#pragma pack(1)

	struct Demo1 {
		int x,y;
	}obj1 = {1,3};

	struct Demo2 {
		int x,y;
		float f;
	}obj2 = {5,3,5.5};
	
	void main() {
	
		printf("%d\n",obj1);
		printf("%d\n",obj2);
	}
