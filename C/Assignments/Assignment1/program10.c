/*
 * 	Program 10:WAP to print numbers in given range and their multiplicatiove inverse.
 *
 */

	#include<stdio.h>

	void main() {
	
		int start,end;

		printf("Start:");
		scanf("%d",&start);
		
		printf("End:");
		scanf("%d",&end);

		for(int i=start;i<=end;i++) {
		
			printf("%d = %0.4f\n",i,(float)1/i);
		}
	}
