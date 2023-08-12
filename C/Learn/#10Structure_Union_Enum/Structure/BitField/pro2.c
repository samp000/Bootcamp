
	#include<stdio.h>
	#pragma pack(1)


	struct Demo {
	
		int x:4;
		int y;
	};

	void main() {
	
		struct Demo obj = {16,500};		//first value must be 4 bit long but its 5 bit so gives warning

		printf("%ld\n",sizeof(struct Demo));
	}
