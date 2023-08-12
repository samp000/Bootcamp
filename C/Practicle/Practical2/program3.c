/*
 * 	Program 3: WAP to print the divisors and count of divisors of the entered number
 */

	#include<stdio.h>

	void main() {
	
		int num;
		printf("Enter a number:");
		scanf("%d",&num);

		int sum=0,cnt=0;

		printf("The divisors are:");

		for(int i=1;i<=num;i++) {
		
			if(num%i==0) {
				printf("%d ",i);
				cnt++;
				sum=sum+i;
			}
		}

		printf("\nThe count of divisors is:%d\n",cnt);
		printf("Additions of divisors is:%d\n",sum);

	}
