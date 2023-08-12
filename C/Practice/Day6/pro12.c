/*
 * 	WAP to print no whose factorial is even
 *
 * 	i/p : Start 1
 * 	      End   5
 *
 *	o/p: 2 3 4 5
 *
 */

	#include<stdio.h>

	int fact(int num) {

		int fact=1;

		while(num!=0) {
		
			fact = fact*num--;
		}

		return fact;
	}

	void main() {

		int start,end;

		printf("start:");
		scanf("%d",&start);	
		
		printf("end:");
		scanf("%d",&end);
		
		for(int i=start;i<=end;i++) {
		
			if(fact(i)%2==0)
				printf("%d ",i);
		}	

		printf("\n");

	}
