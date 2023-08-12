/*
 *
 * 	Program 5: WAP to print all even numbers in reverse order and odd number in standered way. Both seperately. Within a range
 *
 */


	#include<stdio.h>

	void main() {
	
		int startNo,endNo;

		printf("Start:");
		scanf("%d",&startNo);
		printf("End:");
		scanf("%d",&endNo);

		for(int j=endNo;j>=startNo;j--) {
			if(j%2==0)
				printf("%d ",j);
		}
		printf("\n");
		
		for(int i=startNo;i<=endNo;i++) {
			if(i%2!=0)
				printf("%d ",i);
		}

		printf("\n");
	}
