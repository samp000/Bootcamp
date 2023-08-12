/*
 * 	WAP to print a factorial of a given input number from user
 *
 * 	i/p:	5
 * 	o/p:	factorial of 5 is 120
 *
 */

	#include<stdio.h>

	void main() {

		int num;
		printf("Enter a number:");
		scanf("%d",&num);

		int fact = 1,n=num;

		while(num!=0) {
		
			fact = fact * num--;
		}

		printf("Factorial of %d is %d\n",n,fact);

	}

