
	#include<stdio.h>
	#pragma pack(1)

	struct Demo {
	
		int x:1;
		int y;
	};

	void main() {
	
		printf("%ld\n",sizeof(struct Demo));
	}
