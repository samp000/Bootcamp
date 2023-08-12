/*
 * 	Program 1: WAP to find sum of numbers that are not divivsible by 3 up to given number
 *
 */

	#include<stdio.h>

	void main() {
	
		int num;
		printf("Enter number:");
		scanf("%d",&num);

		int sum=0;

		for(int i=1;i<=num;i++) {
		
			if(i%3!=0)
				sum = sum+i;
		}

		printf("Sum of numbers not divisible by 3 is:%d\n",sum);
	}
