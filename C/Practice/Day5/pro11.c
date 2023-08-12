/*
 * 	WAP to print the addition of factorials of two given numbers from the user
 *
 * 	i/p :  num1=4
 * 	       num2=5
 *
 * 	     o/p: addition of factorial of 4 and 5 is 144
 *
 */
	#include<stdio.h>

	int fact(int num) {
	
		int f=1;

		while(num!=0) {
		
			f = f*num--;
		}

		return f;
	}


	void main() {
	
		int num1,num2;

		printf("num1:");
		scanf("%d",&num1);
		
		printf("num2:");
		scanf("%d",&num2);

		printf("Addition of factorial of %d and %d is %d\n",num1,num2,fact(num1)+fact(num2));


	}
