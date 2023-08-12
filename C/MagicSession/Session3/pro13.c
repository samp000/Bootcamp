
	#include<stdio.h>

	void main() {
	
		int a=10;
		char c='A';
		float f=10.5f;
		double d=20.5;

		void *ptr = &a;
		printf("%d\n",*(int*)ptr);
		
		ptr = &c;
		printf("%c\n",*(char*)ptr);
		
		ptr = &f;
		printf("%f\n",*(float*)ptr);
	
		ptr = &d;
		printf("%lf\n",*(double*)ptr);
	}
