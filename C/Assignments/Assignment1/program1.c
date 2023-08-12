/*
 * 	Program1: WAP to see a given nuber is a multiple of 3
 *
 */

	#include<stdio.h>

	void main() {
	
		int num;

		printf("Enter number:");
		scanf("%d",&num);
		
		if(num%3==0) {
		
			printf("%d is multiple of 3\n",num);
		
		}else {

			printf("%d is not a multiple of 3\n",num);
		}	
	}
