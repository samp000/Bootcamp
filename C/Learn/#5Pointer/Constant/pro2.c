	
	#include<stdio.h>

	void main() {
	
		int x=10,y=20;

		const int * const ptr = &x;			//constant pointer and variable

		printf("%d\n",x);

		*ptr=30;				//error

		printf("%d\n",x);
		
		ptr=&y;					//error
	}
