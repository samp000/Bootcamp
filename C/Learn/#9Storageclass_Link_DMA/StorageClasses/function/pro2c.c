
	#include<stdio.h>
	
	void fun();
	void gun();

	void main() {
		
		extern int x;
		gun();
		fun();

		printf("%d\n",x);
	}
