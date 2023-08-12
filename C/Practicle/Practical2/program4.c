/*
 *	Program 4: WAP to take a number as input and print weather it is prime of not.
 *
 */

	#include<stdio.h>
	
	void main() {
	
		int num;

		printf("Enter number:");
		scanf("%d",&num);

		int cnt=0;

		if(num==0 || num==1 || num < 0) {
		
			printf("%d is not a prime number\n",num);
			return;
		}

		for(int i=1;i<=num;i++) {
		
			if(num%i==0)
				cnt++;
		}

		if(cnt<=2)
			printf("%d is a prime number\n",num);
		else
			printf("%d is not a prime number\n",num);
	}
