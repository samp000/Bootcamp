
	#include<stdio.h>

	void main() {
	
		int x ;

		//x = 'A';	this gives output cause , x is assigned by  "constant value"
		//directly takking value from user is doesnt mean, its an constant value so it gives differnt output
		//so solution for this is that use variables of same datatype as mentioned in switch or assign constant value

		printf("Enter value:");
		scanf("%d",&x);



		switch(x) {
		
			case 'A':
				printf("value of x is A\n");
				break;
			case 'B':
				printf("value of x is B\n");
				break;
			case 'C':
				printf("value of x is C\n");
				break;
			case 'D':
				printf("value of x is D\n");
				break;
			default:
				printf("Wrong ip\n");
				break;
		}
	}
