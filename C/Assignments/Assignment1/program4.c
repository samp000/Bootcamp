/*
 * 	Program4: WAP to find sum of numbers that are divisible by 5 in the given range
 *
 */

	#include<stdio.h>

	void main() {
	
		int start,end,sum=0;

		printf("Start:");
		scanf("%d",&start);
		
		printf("End:");
		scanf("%d",&end);


		for(int i=start;i<=end;i++) {		
		
			if(i%5==0) {
				sum+=i;
			}	
		}

		printf("Sum of numbers divisible by 5 in between %d and %d is %d\n",start,end,sum);
	}
