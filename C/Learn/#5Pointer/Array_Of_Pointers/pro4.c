
	#include<stdio.h>

	void main() {
	
		int x=10;
		char ch='A';
		double d = 20.5;

		int* arr[] = {&x,&ch,&d};

		printf("%d\n",*arr[0]);
		printf("%c\n",*arr[0]);
		printf("%lf\n",*arr[0]);
	}
