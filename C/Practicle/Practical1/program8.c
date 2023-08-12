
	/*
	 *
	 * 	Program 9: Print all divisors of entered number
	 */
	
	#include<stdio.h>

	void main() {
	
		int num;

		printf("Enter a number:");
		scanf("%d",&num);

		if(num<=0) {
			printf("Enter positive numbers only...\n");
		}else {
		
			printf("All divisors of %d are:\n",num);
			for(int i=1;i<=num/2;i++) {
		
				if(num%i==0)
					printf("%d\n",i);
			}

		}
	}
