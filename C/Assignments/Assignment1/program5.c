/*
 * 	Program 5: WAP to take number input and print all the factors of that number 
 *
 */

	#include<stdio.h>

	void main() {
	
		int num;

		printf("Enter number:");
		scanf("%d",&num);
		
		printf("Factors of %d are:",num);

		for(int i=1;i<=num;i++) {

			if(num%i==0) {
			
				printf("%d ",i);
			}
		}	

		printf("\n");
	}
