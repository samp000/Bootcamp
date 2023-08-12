
	#include<stdio.h>

	
	int work() {					
	
		printf("Working...\n");	
	}

	void main() {
	
		printf("Start main\n");
		
		int a = work();
		printf("%d\n",a);
		
		printf("Start main\n");
	}

	//in this code return type for works() is given as "int" but return value is not specified but it "return 0" bydefault
