/*
 * 	WAP to print odd nums as it is and cube of even numbers between a given range from user
 *
 * 	i/p: start 10
 * 	     end   20
 *
 * 	o/p: 1000 11 1728  13 2744 15 4096  17 5832 19 8000
 *
 */

	#include<stdio.h>

	void main() {
	
		int start,end;

		printf("Enter start:");
		scanf("%d",&start);
		
		printf("Enter end:");
		scanf("%d",&end);

		for(int i=start;i<=end;i++) {
		
			if(i%2==0)
				printf("%d ",i*i*i);
			else
				printf("%d ",i);
		}

		printf("\n");
	}

	
