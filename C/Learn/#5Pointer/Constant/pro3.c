	
	#include<stdio.h>

	void main() {
	
		int x=10,y=20;

		const int * const ptr = &x;			//constant pointer and variable

		printf("%d\n",x);

		x = 30;				//we cant change variable through pointer but by using variable itself we can

		printf("%d\n",x);
	
			
	}
