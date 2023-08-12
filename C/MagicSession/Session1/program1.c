/*	
 *	WAP to print all the divisors of given numbers
 *
 */

	#include<stdio.h>

	void main() {
	

		int n;
		printf("Enter number:");
		scanf("%d",&n);

		printf("Divisors of %d are:",n);

		for(int i=1;i<=n;i++) {
		
			if(n%i==0)
				printf("%d ",i);
		}

		printf("\n");

	}
