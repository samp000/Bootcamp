
	#include<stdio.h>

	struct Demo1 {
		int x;
		float y;
		double z;

	}obj1;
	
	struct Demo2{
		int x:4;
		float y;
		double z;
	}obj2;
	
	void main() {
	
		printf("%p\n",&obj1.x);
		printf("%p\n",&obj1.y);
		printf("%p\n",&obj1.z);
		
		printf("%p\n",&obj2.x);		//cannot take address of bit field
		printf("%p\n",&obj2.y);
		printf("%p\n",&obj2.z);
	}
