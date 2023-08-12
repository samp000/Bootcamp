/*
 * 	WAP to print factorial of each number between a given range
 *
 * 	i/p: start: 1
 * 	     end:   5
 *
 * 	     o/p:	factorial of 1 is 1
 * 	    		factorial of 2 is 2
 * 	    		factorial of 3 is 6
 * 	    		factorial of 4 is 24
 * 	    		factorial of 5 is 120
 */

	#include<stdio.h>

	void main() {
	
		int start,end;

		printf("start:");
		scanf("%d",&start);
		
		printf("end:");
		scanf("%d",&end);

		for(int i=start;i<=end;i++) {
		
			int fact = 1;

			for(int j=1;j<=i;j++) {
			
				fact = fact * j;
			}

			printf("Factorial of %d is %d\n",i,fact);
		}
	}
