
/*
 * 	Program 11: WAP to take a number as input and print whether that is a prime number or not
 */

	#include<stdio.h>

	void main() {
	
		int num;

		printf("Enter a number:");
		scanf("%d",&num);

		if(num<=1) {
		
			printf("%d is not a prime number...\n",num);
			return;
		}
			

		int cnt=0;

		for(int i=2;i<=num;i++) {
		
			if(num%i==0)
				cnt++;
		}

		if(cnt<=1)
			printf("%d is a prime number\n",num);
		else
			printf("%d is not a prime number\n",num);


	}
