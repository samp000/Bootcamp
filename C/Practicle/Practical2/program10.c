/*
 *
 * 	Program 10 : Take a number from user and print the fibonacci seris up to that number
 */


	#include<stdio.h>

	void main() {
	
		int num;
		printf("Enter number:");
		scanf("%d",&num);

		int i=0,j=1,sum=i+j;

		if(num <= 0) {
		
			printf("Enter number greater than 1\n");
		
		}else {
			printf("%d %d ",i,j);

			while(sum<=num) {

				printf("%d ",sum);
				i = j;
				j = sum;
				sum = i+j;
			}

			printf("\n");

		}
	}
