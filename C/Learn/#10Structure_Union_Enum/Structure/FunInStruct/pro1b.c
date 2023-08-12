
	#include<stdio.h>

	void add(int,int);
	void sub(int,int);
	void mult(int,int);
	void div(int,int);

	struct Operations {
	
		int a;
		void (*add)(int,int);
		void (*sub)(int,int);
		void (*mult)(int,int);
		void (*div)(int,int);
	};

	void main() {
	

		struct Operations o = {10,&add,&sub,&mult,&div};

		o.add(20,10);
		o.sub(20,10);
		o.mult(20,10);
		o.div(20,10);


	}

	void add(int a,int b){
		printf("Addition of %d and %d is %d\n",a,b,a+b);	
	}
	
	void sub(int a,int b){
		printf("Subtraction of %d and %d is %d\n",a,b,a-b);	
	}

	void mult(int a,int b){
		printf("Multiplication of %d and %d is %d\n",a,b,a*b);	
	}

	void div(int a,int b){
		printf("Division of %d and %d is %d\n",a,b,a/b);	
	}
