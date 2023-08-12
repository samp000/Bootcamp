	
	#include<stdio.h>

	void main() {
	
		int x=10,y=20;

		int * const ptr = &x;			//pointer to constant pointer

		printf("%d\n",x);

		*ptr=30;				//works

		printf("%d\n",x);
		
		ptr=&y;					//error
	}
