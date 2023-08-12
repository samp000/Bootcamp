	
	#include<stdio.h>
	void fun();	

	static int x=10;	//we can accesss this in whole file

	

	void main() {
	
		static int y=20; //we can only access this locally withh all properties of static class		

		printf("x:%d\n",x);
		printf("y:%d\n",y);

		x++;
		y++;

		printf("x:%d\n",x);
		printf("y:%d\n",y);

		fun();

		printf("x:%d\n",x);
		printf("y:%d\n",y);

	}

	void fun() {
	
	//	y++;	error
		x++;
	}

