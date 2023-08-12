
/*
 * Program 5: Write a program that takes a number from 0 to 5 and prints its spelling
 * 	if the number is greater than 5 print entered number is greater than 5
 *
 */


	#include<stdio.h>

	void main() {
	
		int num;

		printf("Enter number:");
		scanf("%d",&num);

		switch(num) {
		
			case 0:
				printf("Zero\n");
				break;
			case 1:
				printf("One\n");
				break;
			case 2:
				printf("Two\n");
				break;
			case 3:
				printf("Three\n");
				break;
			case 4:
				printf("Four\n");
				break;
			case 5:
				printf("Five\n");
				break;

			default:
				if(num>5)
					printf("%d is greater than 5\n",num);
				else
					printf("Enter number greater than 0\n");
				break;
		}
	} 
