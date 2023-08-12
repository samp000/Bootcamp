
	#include<stdio.h>

	//in struct every element got memory
	struct Demo1 {
		int x;
		float y;
		double z;
	}obj1;

	//in union only one element got memory whose datatype size of maximum
	union Demo2 {
		int x;
		float y;
		double z;
	}obj2;

	void main() {
	
		printf("%ld\n",sizeof(obj1));
		printf("%ld\n",sizeof(obj2));
	}
