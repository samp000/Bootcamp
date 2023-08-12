/*
 *
 * 	Program 8: take input from user and print product of digits
 */


	#include<stdio.h>

	void main() {
	
		int num;

		printf("Enter number:");
		scanf("%d",&num);

		int product=1;

		while(num!=0) {
			product = product * (num%10);
			num = num/10;
		}

		printf("Product of digits is %d\n",product);
	}
