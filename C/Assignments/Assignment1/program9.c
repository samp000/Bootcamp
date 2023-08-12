/*
 * 	Program 9 : WAP to calculate squareroot of given number within range 100 to 300
 *
 */

	#include<stdio.h>

	void main() {
	
		int num;

		printf("Enter number:");
		scanf("%d",&num);

		float sqrt;

		for(float i=0.0001;i*i<=num;i+=0.0001) {
		
			sqrt=i;
		}

		printf("Square root of number is : %.2f\n",sqrt);
	}
