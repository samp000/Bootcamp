	
	#include<stdio.h>

	void main() {
	
		int x=10,y=20;

		const int *ptr = &x;			//pointer to constant variable

		printf("%d\n",x);

		*ptr=30;				//error

		printf("%d\n",x);
		
		ptr=&y;					//works
	}
