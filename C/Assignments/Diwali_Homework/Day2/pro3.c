
	#include<stdio.h>

	void main() {
	
		int a=30;
		float b = 30.0;
		char c = 'c';
		double d = 35.0;

		void* arr[] = {&a,&b,&c,&d};


		printf("%d\n",*((int*)arr[0]));
		printf("%f\n",*((float*)arr[1]));
		printf("%c\n",*((char*)arr[2]));
		printf("%lf\n",*((double*)arr[3]));
	}
