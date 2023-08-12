/*	
 *	WAP to count digits in given numbers
 *
 */

	#include<stdio.h>

	void main() {
	

		int n;
		printf("Enter number:");
		scanf("%d",&n);

		int count=0;

		while(n!=0) {
		
			count++;
			n/=10;
		}

		printf("no of digits in number are %d\n",count);

	}
