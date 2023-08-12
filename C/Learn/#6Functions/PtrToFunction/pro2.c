
	#include<stdio.h>

	void add(int a,int b) {
		printf("1 = %d\n",a+b);
		printf("2 = %d\n",a+b);
		printf("3 = %d\n",a+b);
	}
	
	void main() {
	
		void (*ptr)(int,int);

		ptr = &add;
		ptr(30,20);

		printf("%p\n",ptr);

		ptr++;
						//we cannot increment function pointer two times
		printf("%p\n",ptr);
		
		ptr(30,40);				//if we have incremented function pointers still its runs all the instruction from start of function
							//this is because when we call ptr(30,40) it loads whole stack frame and we cannot execute any random line
							//in function.
		ptr++;	
		printf("%p\n",ptr);
		ptr+=50;	
		printf("%p\n",ptr);
	}
