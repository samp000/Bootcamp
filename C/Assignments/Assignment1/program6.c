/*
 * 	Program 6: WAP to calculate factorial of a given number 
 *
 */

	#include<stdio.h>

	void main() {
	
		int num;

		printf("Enter number:");
		scanf("%d",&num);
		
		int fact=1;

		for(int i=2;i<=num;i++) {

			fact = fact * i;
		}	

		printf("Factorial of %d is :%d\n",num,fact);
	}
