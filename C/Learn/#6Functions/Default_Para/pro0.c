
	#include<stdio.h>

	void fun(int x,int y,int z);

	void main() {
	
		int x=10,y=20,z=30;

		fun(x,y,z);
		fun(x,y);


	}


	void fun(int x,int y,int z=50) {
	
		printf("Add = %d\n",x+y+z);
	}
