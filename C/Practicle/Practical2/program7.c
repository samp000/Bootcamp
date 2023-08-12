/*
 *
 * 	Program 7: take input from user and sum of digits
 */


	#include<stdio.h>

	void main() {
	
		int num;

		printf("Enter number:");
		scanf("%d",&num);

		int sum=0;

		while(num!=0) {
			sum = sum + num%10;
			num = num/10;
		}

		printf("Sum of digits is %d\n",sum);
	}
